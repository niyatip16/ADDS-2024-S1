#include <iostream>
#include "Reverser.h"
#include "Truckloads.h"

int main() {
    // Test Reverser
    Reverser r;
    int reversedNumber = r.reverseDigit(12345);
    std::cout << "Reversed number: " << reversedNumber << std::endl;

    std::string reversedString = r.reverseString("hello");
    std::cout << "Reversed string: " << reversedString << std::endl;

    // Test Truckloads
    Truckloads t;
    int numTrucks = t.numTrucks(10, 3);
    std::cout << "Number of trucks needed: " << numTrucks << std::endl;

    return 0;
}
