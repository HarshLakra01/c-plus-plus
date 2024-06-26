#include <iostream>
#include <cmath>

using namespace std;

int exp(int num, int power)
{
    int result = 1;
    for(int i=0; i<power; i++)
    {
        result *= num;
    }
    return result;
}

int main()
{
    int num, power;
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter power: ";
    cin >> power;

    cout << exp(num, power);

    return 0;
}