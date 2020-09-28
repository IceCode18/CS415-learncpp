#include <iostream>
#include <string>

#include "dispenser.h"

using namespace std;

Dispenser::Dispenser(string name, double price, int quantity){
    itemName = name;
    itemPrice = price;
    itemQuantity = quantity;
}
Dispenser::Dispenser(){}
Dispenser::~Dispenser(){
    cout << "Dispenser "<< itemName <<" is emptied." << endl;
}
string Dispenser::getItemName(){
    return itemName;
}
double Dispenser::getItemPrice(){
    return itemPrice;
}
int Dispenser::getItemQuantity(){
    return itemQuantity;
}