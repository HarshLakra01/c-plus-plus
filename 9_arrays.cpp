#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int luckyNums[10] = {10, 15, 17, 22, 24, 44};
    
    luckyNums[1] = 14;
    luckyNums[9] = 88;

    cout << luckyNums[3] << endl;

    cout << luckyNums[8] << endl; /*if we declare size of array as 10 but only declare first 5 elements
    then last 5 elements will have value 0 until assigned a value.*/
    return 0;
}