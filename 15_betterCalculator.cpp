#include <iostream>

using namespace std;

int calculator(int num1, int num2, char op)
{
    int result;

    if(op == '+')
    {
        result = num1 + num2;
    }

    else if(op == '-')
    {
        result = num1 - num2;
    }

    else if(op == '*')
    {
        result = num1 * num2;
    }

    else if(op == '/')
    {
        result = num1 / num2;
    }

    else
    {
        cout << "Invalid operator";
    }

    return result;
}

int main()
{
    int num1, num2;
    char op;

    cout << "Welcome to the calculator! \n";

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter mathematical operation to perform ";
    cin >> op;

    cout << "Answer is " << calculator(num1, num2, op);
    
    return 0;
}