#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int luckyNums[5], i;

    for(i=0; i<5; i++)
    {
        cin >> luckyNums[i];
    }

    for(i=0; i<5; i++)
    {
        cout << luckyNums[i] << " ";
    }

    return 0;
}