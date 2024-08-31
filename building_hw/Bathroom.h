//
// Created by Ahmed Taha on 24/08/31.
//

#ifndef OOPCOURSEHOMEWORK_BATHROOM_H
#define OOPCOURSEHOMEWORK_BATHROOM_H


class Bathroom {
    int numOfBaths;
    int area;
    int height;
public:
    Bathroom();
    Bathroom(int numOfBaths, int area, int height);
    int getNumOfBaths() const;
    int getArea() const;
    int getHeight() const;
    void setNumOfBaths(int numOfBaths);
    void setArea(int area);
    void setHeight(int height);
};


#endif //OOPCOURSEHOMEWORK_BATHROOM_H
