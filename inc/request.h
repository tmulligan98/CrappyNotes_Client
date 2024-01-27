#ifndef REQUESTS
#define REQUESTS

#include <string>
#include <curl/curl.h>
#include <curl/curl.h>

class Request {

    private:
        CURL* curl;
        const char* url;
        std::string response;

    public:
        Request(char* url);
        ~Request();

        void setUrl(std::string url);
        std::string makeGetRequest();

        CurlException(CURLcode error_code) = std::runtime_error(curl_easy_strerror(error_code));


};

#endif // REQUESTS