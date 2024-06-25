#include <iostream>
#include <cmath>

using namespace std;

void greeting()
{
    cout << "Sir\n";
}

void respect(string name);

int main()
{
    cout << "Hello Hunny ";
    greeting();

    respect("Lieutenant");
    respect("Captain");
    respect("Major");
    respect("Lt.Colonel");
    respect("Colonel");
    respect("Brigadier");
    respect("Major General");

    return 0;
}

//we can declare a function after calling it, just write a stub of that function before int main

void respect(string name)
{
    cout << "All bombers ready to take-off " << name << " Harsh Lakra" << endl;
}