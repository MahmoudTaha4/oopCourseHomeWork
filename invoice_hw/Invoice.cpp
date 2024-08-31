#include "Invoice.h"

Invoice::Invoice(){
    name = " ";
    itemNum = price = quantity = 0;
}

Invoice::Invoice(string name, int itemNum, double price, int quantity) : name(name),
                                                                      itemNum(itemNum), price(price),
                                                                      quantity(quantity) {}

double Invoice::getTotalPrice() const {
    return price * quantity;
}

string Invoice::toString() {
    string outPut = "name : " + name + '\n' +
                    "item number : " + to_string(itemNum) + '\n' +
                    "price : " + to_string(price) + '\n' +
                    "quantity : " + to_string(quantity) + '\n' +
                    "total price : " + to_string(getTotalPrice());
    return outPut;
}