#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    return numTrucksHelper(numCrates, loadSize);
}

int Truckloads::numTrucksHelper(int numCrates, int loadSize) {
    if (numCrates <= loadSize) return 1;
    int left = numCrates / 2;
    int right = numCrates - left;
    return numTrucksHelper(left, loadSize) + numTrucksHelper(right, loadSize);
}
