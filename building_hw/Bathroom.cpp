//
// Created by Ahmed Taha on 24/08/31.
//

#include "Bathroom.h"

Bathroom :: Bathroom(){
    numOfBaths = area = height = 0;
}
Bathroom::Bathroom(int numOfBaths, int area, int height) : numOfBaths(numOfBaths), area(area), height(height) {}

int Bathroom::getNumOfBaths() const {
    return numOfBaths;
}

int Bathroom::getArea() const {
    return area;
}

int Bathroom::getHeight() const {
    return height;
}

void Bathroom::setNumOfBaths(int numOfBaths) {
    Bathroom::numOfBaths = numOfBaths;
}

void Bathroom::setArea(int area) {
    Bathroom::area = area;
}

void Bathroom::setHeight(int height) {
    Bathroom::height = height;
}
