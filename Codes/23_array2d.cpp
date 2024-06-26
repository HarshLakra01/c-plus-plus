#include <iostream>

using namespace std;


int main()
{
    int i, j;
    cout << "Enter number of arrays: ";
    cin >> i;
    cout << "Enter no. of elements in each array: ";
    cin >> j;


    int array[i][j];
    for(int a=0; a<i; a++)
    {
        for(int b=0; b<j; b++)
        {
            cin >> array[a][b];
        }
    }

    for(int a=0; a<i; a++)
    {
        for(int b=0; b<j; b++)
        {
            cout << array[a][b]; 
        }
        cout << "\n";
    }

    return 0;
}