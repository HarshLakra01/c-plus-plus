#include <iostream>

using namespace std;

int main()
{
    int secretNumber = 8, guess;

    do
    {
        cout << "Enter guess: ";
        cin >> guess;
    }while(secretNumber != guess);

    cout << "Your guess is right\nSecret number is " << guess << endl;
}