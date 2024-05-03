#include <iostream>
#include <windows.h>
#include <string>
#include <ctime>

int main(int argc, char* argv[]) {

    // If no args are passed, application was not called from the loader
    if (argc < 2) {
        std::cerr << "Run Application With Launcher" << std::endl;
        Sleep(10000);
        return FALSE;
    }

    // Token authentication
    time_t current_time = time(nullptr);
    std::string expected_token = std::to_string(current_time * 67);

    // Verify token
    if (expected_token != argv[1]) {
        std::cerr << "Run Application With Launcher" << std::endl;
        Sleep(10000);
        return FALSE;
    }

    // DEBUG (write token) // REMOVE
    std::cout << expected_token << std::endl;

    std::cout << "This is the application" << std::endl;
    
    Sleep(10000);

    return TRUE;
}