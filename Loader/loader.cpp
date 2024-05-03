#include <iostream>
#include <windows.h>
#include <string>
#include <ctime>

int main() {

    // Use current time as Cryptographic token (not very secure)
    time_t current_time = time(nullptr);

    // Current time * 67 to add some obscurity
    std::string token = std::to_string(current_time * 67);

    // Call the application with the token
    std::string command = "Application.exe " + token;
    system(command.c_str());

    return 0;
}