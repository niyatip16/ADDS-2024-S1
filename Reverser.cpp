#include "Reverser.h"
using namespace std;

int Reverser::reverseDigit(int value) {
    if (value < 0) return -1; 
    return reverseDigitHelper(value, 0);
}

int Reverser::reverseDigitHelper(int value, int reversed) {
    if (value == 0) return reversed;
    return reverseDigitHelper(value / 10, reversed * 10 + value % 10);
}

string Reverser::reverseString(string characters) {
    if (characters.empty()) return "";
    return reverseString(characters.substr(1)) + characters[0];
}
