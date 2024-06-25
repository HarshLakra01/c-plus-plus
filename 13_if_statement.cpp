#include <iostream>

using namespace std;

int main()
{
    bool isMale = true;
    bool isRich = false;
    
    if(isMale && isRich)
    {
        cout << "You are a sigma male.";
    }

    else if(isMale || isRich)
    {
        cout << "Either you are male or you're rich. \n";
    }

    if(isMale && !isRich)
    {
        cout << "Work hard to uplift your standard of life.";
    }

    else
    {
        cout << "You are a simp.";
    }

    return 0;
}