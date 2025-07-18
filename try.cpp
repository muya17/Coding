#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>

int main() {
    // Get current time
    auto now = std::chrono::system_clock::now();
    std::time_t current_time = std::chrono::system_clock::to_time_t(now);
    
    // Convert to local time
    std::tm* local_time = std::localtime(&current_time);
    
    // Print current date and time
    std::cout << "Current Date and Time: ";
    std::cout << std::put_time(local_time, "%A, %B %d, %Y at %I:%M:%S %p") << std::endl;
    
    return 0;
}
