#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Please enter name: ";
    //for inputting single character, int, double use cin;
    //cin >> name; 
    //for inputting a sentence with spaces between words we use getline
    //otherwise first word will only be printed & any other input after that will automatically input 0.
    getline(cin, name);
    cout << "Hi " << name << endl;

    int age;
    cout << "Please enter age: ";
    cin >> age;

    cout << "You are " << age << " years old.";

    return 0;
}