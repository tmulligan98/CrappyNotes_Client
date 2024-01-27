#include "request.h"
#include <iostream>

size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output) {
    size_t total_size = size * nmemb;
    output->append(static_cast<char*>(contents), total_size);
    return total_size;
}

Request::Request(char* url) {
    this->url = url;
    this->curl = curl_easy_init();
    curl_easy_setopt(this->curl, CURLOPT_URL, this->url);
    curl_easy_setopt(this->curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(this->curl, CURLOPT_WRITEDATA, &this->response);
};

Request::~Request(){
    std::cout << "Request destructor called" << std::endl;
    curl_easy_cleanup(this->curl);
};

std::string Request::makeGetRequest(){
    
    CURLcode res = curl_easy_perform(curl);
    if (res != CURLE_OK) {
        std::cerr << "cURL request failed: " << curl_easy_strerror(res) << std::endl;
        throw 
    } else {
        // Print the response
        std::cout << "Response: " << response << std::endl;
    }
};