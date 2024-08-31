#ifndef OOPCOURSEHOMEWORK_BUILDING_H
#define OOPCOURSEHOMEWORK_BUILDING_H
#include "vector"
using namespace std;
#include "Apartment.h"
#include "Elevator.h"

class Building {
    vector <Apartment> apartments;
    vector <Elevator> elevator;
public:
    Building();

    Building(const vector<Apartment> &apartments, const vector<Elevator> &elevator);

    void addNewApartment(Apartment newApartment);

    void addNewElevator (Elevator newElevator);

    int getNumOfApartments();

    int getNumOfElevators();
};


#endif //OOPCOURSEHOMEWORK_BUILDING_H
