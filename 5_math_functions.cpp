#include <iostream>
// include cmath file before using mathematical functions
#include <cmath>

using namespace std;

int main()
{
    
    
    cout << pow(6, 5) << endl; // 6 ki power 5

    cout << sqrt(49) << endl; // square root of 49
    cout << sqrt(49.49) << endl; // can also find sqrt of decimal number

    cout << round(7.4) << endl; // round-off the number
    cout << round(7.5) << endl;

    cout << ceil(4.1) << endl; // ceiling function (rounds off number to next upper integer)
    cout << floor(4.9) << endl; // floor function (just opposite of ceil function)

    cout << fmax(10, 12) << endl; //fmax function returns bigger of the two numbers given as argument
    cout << fmin(10, 12) << endl; // opposite of fmax

    
    
    return 0;
}