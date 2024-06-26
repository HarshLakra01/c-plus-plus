#include <iostream>

using namespace std;

int main()
{
    cout << 2006 - 2 << endl;
    cout << 15 % 2 << endl;
    // revise precedence of logic pemdaslr

    int yr_birth = 1984;
    float age = 39.5;
    age++;

    cout << yr_birth + 1 << " " << /*age++*/  endl; //age++ won't work here, age++ should be written before printing it

    yr_birth += 6;
    cout << yr_birth << endl;

    cout << 10 / 3 << endl;
    cout << 10.0 / 3.0 << endl;

    cout << "Hariom Sewa Dal" << endl;


    return 0;
}