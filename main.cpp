#include <iostream>
#include "Item.h"
using namespace std;

int main() {
    Item item1("Binder", 10);
    Item item2("Eraser", 50);

    item1.display();
    item2.display();

    return 0;
}


//making sure to include the item.h we are able to call items without having any code about items in our main.cpp