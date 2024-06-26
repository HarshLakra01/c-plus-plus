#include <iostream>

using namespace std;

int main()
{
    int secretNum = 47, guess, guessCount=0, guessLimit= 3;

    cout << "Enter a guess: ";
    cin >> guess;

    while(secretNum != guess)
    {
        if(guessCount != guessLimit)
        {
            cout << "Enter a guess: ";
            cin >> guess;
            guessCount++;
        }

        else
        {
            break;
        }
    }

    if(guessCount == guessLimit && secretNum != guess)
    {
        cout << "You lose :(";
    }

    else
    {
        cout << "You win\nSecret Number is " << guess << endl;
    }

    
    return 0;
}