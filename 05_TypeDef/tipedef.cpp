#include <iostream>
#include <vector>

// Using typedef to create an alias for a type
typedef unsigned long ulong;
typedef std::vector<int> IntVector;

// Using type alias (introduced in C++11) to create an alias for a type
using uint = unsigned int;
using StringVector = std::vector<std::string>;

int main() {
    ulong a = 1000000;
    uint b = 500000;
    
    IntVector numbers = {1, 2, 3, 4, 5};
    StringVector words = {"hello", "world"};

    std::cout << "ulong a: " << a << std::endl;
    std::cout << "uint b: " << b << std::endl;

    std::cout << "IntVector numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "StringVector words: ";
    for (const std::string& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}