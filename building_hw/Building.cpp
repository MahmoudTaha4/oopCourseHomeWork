//
// Created by Ahmed Taha on 24/08/31.
//

#include "Building.h"

Building::Building(){}



void Building::addNewApartment(Apartment newApartment) {
    apartments.push_back(newApartment);
}

int Building ::getNumOfApartments() {
    return apartments.size();
}

int Building ::getNumOfElevators() {
    return elevator.size();
}

void Building ::addNewElevator(Elevator newElevator) {
    elevator.push_back(newElevator);
}

Building::Building(const vector<Apartment> &apartments, const vector<Elevator> &elevator) : apartments(apartments),
                                                                                            elevator(elevator) {}
