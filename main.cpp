#include <iostream>

int main(int argc, char *argv[]) {

    // No commandline args provided
    if (argc < 2) {
        std::cout << "Welcome to the Crappy Notes Client!" << std::endl;
        std::cout << "Client Version: 1.0.0" << std::endl;
    }
    else {
        std::cout << "Hello, World" << std::endl;
    }
    
    return 0;
}