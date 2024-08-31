#include <iostream>
#include "address_hw/LuckyNumber.h"
#include "invoice_hw/Invoice.h"

int main() {
    Invoice invoice("acer laptop", 202105, 31.5, 4);
    cout << invoice.getTotalPrice() << '\n';
    cout << invoice.toString() << '\n';
}
