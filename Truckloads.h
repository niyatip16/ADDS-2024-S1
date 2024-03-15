#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

class Truckloads {
public:
    int numTrucks(int numCrates, int loadSize);
private:
    int numTrucksHelper(int numCrates, int loadSize);
};

#endif 
