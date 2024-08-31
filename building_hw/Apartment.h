//
// Created by Ahmed Taha on 24/08/31.
//

#ifndef OOPCOURSEHOMEWORK_APARTMENT_H
#define OOPCOURSEHOMEWORK_APARTMENT_H
#include "vector"
#include "Bathroom.h"

#include "Room.h"
using namespace std;

class Apartment {
    vector <Bathroom> bathrooms;
    vector <Room> rooms;
public:
    Apartment();
    void addNewRoom(Room newRoom);
    Apartment(const vector<Bathroom> &bathrooms, const vector<Room> &rooms);

    void addNewBathrooms(Bathroom newBathroom);
    int getNumOfBathrooms();
    int getNumOfRooms();
};


#endif //OOPCOURSEHOMEWORK_APARTMENT_H
