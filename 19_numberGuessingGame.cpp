#include <iostream>

using namespace std;

int main()
{
    int secretNum = 8, guess, guessCount = 0, guessLimit = 4;
    bool outOfGuess = false;

    while(secretNum != guess && !outOfGuess)
    {
        if(guessCount < guessLimit)
        {
            cout << "Enter a guess: ";
            cin >> guess;
            guessCount++;
        }
        else
        {
            outOfGuess = true;
        }
        
    }

    if(outOfGuess = true && secretNum != guess)
    {
        cout << "You lose :(";
    }
    
    else
    {
        cout << "You win! \nSecret number is " << guess << endl;
    }
    
}