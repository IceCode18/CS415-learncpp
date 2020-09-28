#include <iostream>
#include <string>

using namespace std;

class Register {
    public:
        Register(double amount);
        ~Register();
        void collect(double itemCost, double payment);
        void printCash();
    private:
        double registerCash;
};