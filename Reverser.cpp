#include "Reverser.h"

int Reverser::reverseDigit(int value) {
    if (value < 0) return -1; // Invalid input
    return reverseDigitHelper(value, 0);
}

int Reverser::reverseDigitHelper(int value, int reversed) {
    if (value == 0) return reversed;
    return reverseDigitHelper(value / 10, reversed * 10 + value % 10);
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.empty()) return "";
    return reverseString(characters.substr(1)) + characters[0];
}
