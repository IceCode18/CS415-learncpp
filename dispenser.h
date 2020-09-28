#include <iostream>
#include <string>

using namespace std;

class Dispenser {
    public:
        Dispenser(string name, double price, int quantity);
        Dispenser();
        ~Dispenser();
        string getItemName();
        double getItemPrice();
        int getItemQuantity();
        void dispense();
    private:
        string itemName;
        double itemPrice;
        int itemQuantity;
};