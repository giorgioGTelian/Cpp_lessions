#include <iostream>

int main() {
    int intVar = 5;
    double doubleVar = 6.7;

    // Implicit conversion
    double result = intVar + doubleVar;

    std::cout << "Result of implicit conversion: " << result << std::endl;

    // Explicit conversion
    intVar = static_cast<int>(doubleVar);
    std::cout << "Result of explicit conversion: " << intVar << std::endl;

    return 0;
}