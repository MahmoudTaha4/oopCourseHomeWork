//
// Created by Ahmed Taha on 24/08/31.
//

#include "Apartment.h"

Apartment::Apartment() {}


void Apartment::addNewRoom(Room newRoom) {
    rooms.push_back(newRoom);
}


int Apartment::getNumOfRooms() {
    return rooms.size();
}

void Apartment::addNewBathrooms(Bathroom newBathroom) {
    bathrooms.push_back(newBathroom);
}

Apartment::Apartment(const vector<Bathroom> &bathrooms, const vector<Room> &rooms) : bathrooms(bathrooms), rooms(rooms) {}

