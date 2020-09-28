#include <iostream>
#include <string>

#include "register.h"

using namespace std;

Register::Register(double amount){
    registerCash = amount;
}
Register::~Register(){
    cout << "Register is emptied." << endl;
}
void Register::collect(double itemCost, double payment){
    registerCash += itemCost;
    if(payment > itemCost){
        cout << "Returning $" << payment-itemCost << "." << endl;
    }
}
void Register::printCash(){
    cout << "The register has $" << registerCash << "." << endl;
}