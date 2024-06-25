#include <iostream>

using namespace std;

void missile(string mname, int payload_capacity)
    {
        cout << "Our missile is " << mname << endl;
        cout << "It has a maximum payload capacity of " << payload_capacity << " Kgs" << endl;
    }

int main()
{
    string greeting = "Welcome to your code sir, i would love to help you today";
    bool istrue = true;
    cout << greeting << endl;
    cout << istrue << endl;

    cout << greeting.substr(2, 6) << endl;
    cout << greeting.length() % 7 << endl;
    cout << greeting.find('w', 9) << endl;

    missile("Brahmos", 300);
    missile("Agni", 200);
    missile("Trishul", 250);

    return 0;
}