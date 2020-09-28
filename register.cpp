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

void Register::printCash(){
    cout << "The register has $" << registerCash << "." << endl;
}