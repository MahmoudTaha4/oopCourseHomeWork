cmake_minimum_required(VERSION 3.28)
project(oopCourseHomeWork)

set(CMAKE_CXX_STANDARD 17)

add_executable(oopCourseHomeWork main.cpp
        building_hw/Building.h
        building_hw/Building.cpp
        building_hw/Apartment.h
        building_hw/Apartment.cpp
        building_hw/Elevator.h
        building_hw/Elevator.cpp
        building_hw/Room.h
        building_hw/Room.cpp
        building_hw/Bathroom.h
        building_hw/Bathroom.cpp
        invoice_hw/Invoice.h
        invoice_hw/Invoice.cpp
        address_hw/LuckyNumber.h)
