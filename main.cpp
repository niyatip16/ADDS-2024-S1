#include <iostream>
#include "Reverser.h"
#include "Truckloads.h"

using namespace std;

int main() {

    Reverser r;
    int reversedNumber = r.reverseDigit(12345);
    cout << "Reversed number: " << reversedNumber << endl;

    string reversedString = r.reverseString("hello");
    cout << "Reversed string: " << reversedString << endl;

    Truckloads t;
    int numTrucks = t.numTrucks(10, 3);
    cout << "Number of trucks needed: " << numTrucks << endl;

    return 0;
}
