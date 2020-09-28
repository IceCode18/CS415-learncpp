#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv){
    double registerCash = 50;
    int totalItems = 6;

   
    Register reg(registerCash);
    Dispenser healingPotion("Healing Potion", 3, 50);
    Dispenser manaPotion("Mana Potion", 5, 40);
    Dispenser fullRestore("Full Restore", 20, 30);
    Dispenser revivePotion("Revive Potion", 50, 10);
    Dispenser elixir("Elixir", 30, 20);
    Dispenser antidote("Antidote", 10, 35);
    Dispenser stocks[totalItems] = {healingPotion, manaPotion, fullRestore, revivePotion, elixir, antidote};
    cout << "Welcome Adventurer!" << endl << "How may I serve your today?";


}
