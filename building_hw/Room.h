//
// Created by Ahmed Taha on 24/08/31.
//

#ifndef OOPCOURSEHOMEWORK_ROOM_H
#define OOPCOURSEHOMEWORK_ROOM_H


class Room {
    int tables;
    int area;
    int height;
public:
    Room();

    Room(int tables, int area, int height);

    int getArea() const;

    int getHeight() const;

    int getTables() const;

    void setArea(int area);

    void setHeight(int height);

    void setTables(int tables);
};


#endif //OOPCOURSEHOMEWORK_ROOM_H
