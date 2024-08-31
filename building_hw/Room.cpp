//
// Created by Ahmed Taha on 24/08/31.
//

#include "Room.h"

Room::Room(){
    area = 0;
    height = 0;
    tables = 0;
}


int Room::getTables() const {
    return tables;
}


void Room::setTables(int tables) {
    Room::tables = tables;
}

Room::Room(int tables, int area, int height) : tables(tables), area(area), height(height) {}

int Room::getArea() const {
    return area;
}

int Room::getHeight() const {
    return height;
}

void Room::setArea(int area) {
    Room::area = area;
}

void Room::setHeight(int height) {
    Room::height = height;
}
