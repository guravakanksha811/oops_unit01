#include <iostream>

int main() {
    int age = 20;            // Whole number
    double price = 99.99;    // Decimal number
    char grade = 'A';        // Single character
    bool isStudent = true;   // True or False

    std::cout << "Age: " << age << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Is Student: " << std::boolalpha << isStudent << std::endl;

    return 0;
}