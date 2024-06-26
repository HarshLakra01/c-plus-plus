#include <iostream>

using namespace std;

int getmax(int num1, int num2)
{
    int result;
    if(num1 < num2)
    {
        result = num2;
    }

    else if (num1 > num2)
    {
        result = num1;
    }

    return result;
}


int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << getmax(num1, num2);
    cout << " is larger number out of these two.";

    return 0;
}