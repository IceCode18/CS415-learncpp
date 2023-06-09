#include <iostream>
#include <string>

#include "register.h"
#include "dispenser.h"

using namespace std;

int main(int argc, char **argv){
    double registerCash = 50;
    int totalItems = 6;

    Register reg(registerCash);
    Dispenser healingPotion("Healing Potion", 3, 50);
    Dispenser manaPotion("Mana Potion", 5, 40);
    Dispenser fullRestore("Full Restore", 20, 30);
    Dispenser revivePotion("Revive Potion", 50, 2);
    Dispenser elixir("Elixir", 30, 20);
    Dispenser antidote("Antidote", 10, 35);
    Dispenser stocks[totalItems] = {healingPotion, manaPotion, fullRestore, revivePotion, elixir, antidote};
    cout << "Welcome Adventurer!" << endl << "How may I serve your today?";
    int itemSelection = 0;
    while (true){
        cout << endl;
        for(int i = 0; i < totalItems; i++){
            cout << i+1 << ". " << stocks[i].getItemName() << ": $" << stocks[i].getItemPrice() << " (" << stocks[i].getItemQuantity() << ")" << endl;
        }
        cout << "Make your selection (use zero or a negative number to exit): ";
        cin >> itemSelection;
        itemSelection--;
        if(itemSelection < 0){
            cout << endl << "Good luck on your quest, Adventurer!" << endl;
            break;
        }
        else if(itemSelection >= totalItems){
            cout << "We only sell " << totalItems << " items, Adventurer." << endl;
        }
        else if(stocks[itemSelection].getItemQuantity() < 1){
            cout << "I'm sorry, Adventurer! That item is currently out of stock." << endl;
        }
        else{
            cout << "You have selected: " << stocks[itemSelection].getItemName() << "." << endl;
            double itemCost = stocks[itemSelection].getItemPrice();
            double insertedAmount = 0;
            while (insertedAmount < itemCost){
                cout << "Insert $" << itemCost-insertedAmount << ": ";
                double newAmount;
                cin >> newAmount;
                insertedAmount += newAmount;
            }
            stocks[itemSelection].dispense();
            reg.collect(itemCost, insertedAmount);
            reg.printCash();
        }  
        itemSelection = 0;
    }

}
