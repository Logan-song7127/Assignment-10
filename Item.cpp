#include <iostream>
#include "Item.h"

Item::Item() {
    name = "Unknown";
    quantity = 0;
}

Item::Item(string itemName, int itemQty) {
    name = itemName;
    quantity = itemQty;
}

void Item::display() {
    cout << "Item: " << name << ", Quantity: " << quantity << endl;
}


//all the functions for the item class are defined here (including the constructor)
//all the instance variables are already defined.  