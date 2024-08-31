#include "string"
using namespace std;

#ifndef OOPCOURSEHOMEWORK_INVOICE_H
#define OOPCOURSEHOMEWORK_INVOICE_H


class Invoice {
    string name;
    int itemNum;
    double price;
    int quantity;
public:
    Invoice();
    Invoice(string name, int itemNum, double price, int quantity);
    double getTotalPrice() const;
    string toString();
};


#endif //OOPCOURSEHOMEWORK_INVOICE_H
