#include <iostream>

using namespace std;

class Chef                       //Super Class
{
    public:
        void makeCake()
        {
            cout << "The chef makes yummy cake.\n";
        }

        void makeOmelette()
        {
            cout << "The chef makes spicy omelette.\n";
        }

        void makeSpecialDish()
        {
            cout << "The chef makes taco.";
        }
};

class Indian_Chef : public Chef            //Sub Class
{
    public:
        void makeJalebi()
        {
            cout << "The chef makes hot jalebi.\n";
        }

        void makeSpecialDish()            //Function overriding  (Superclass had special dish but we changed special dish for indian chef)
        {
            cout << "The chef makes matar paneer.";
        }
};



int main()
{
    Chef chef;
    chef.makeCake();

    Indian_Chef indian_chef;
    indian_chef.makeOmelette();
    indian_chef.makeJalebi();
    indian_chef.makeSpecialDish();

    return 0;
}