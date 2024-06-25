/* In switch statements, expression in curly brackets can be int or char(ascii value of char will be used for evaluation of switch statement)
   but float or string can be used as expression. */

/* We need to add a break after every case to stop executing all other cases after our required case is executed.
   If we don't add break then each case after the required case will also get executed.*/
#include <iostream>

using namespace std;

string getDay(int dayNum)
{
    string day;

    switch(dayNum)
    {
        case 1:
            day = "Monday";
            break;
        case 2:
            day = "Tuesday";
            break;
        case 3:
            day = "Wednesday";
            break;
        case 4:
            day = "Thursday";
            break;
        case 5:
            day = "Friday";
            break;
        case 6:
            day = "Saturday";
            break;
        case 7:
            day = "Sunday";
            break;
        default:
            day = "Invalid day number";

        return day;
    }
}

int main()
{
    int numOfDay;
    cout << "Enter day number: ";
    cin >> numOfDay;

    cout << getDay(numOfDay);

    return 0;
}