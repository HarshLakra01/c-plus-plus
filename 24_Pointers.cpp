#include <iostream>

using namespace std;

int main()
{
    string Name = "Harsh Lakra";
    string *pName = &Name;
    int Age = 19;
    int *pAge = &Age;

    cout << &Name << endl;
    cout << &Age << endl;
    cout << pName << endl;
    cout << pAge << endl;

    cout << *pName << endl;
    cout << *pAge << endl;
    cout << *(&Name) << endl;
    cout << *(&Age) << endl;

    return 0;
}