#include <iostream>

using namespace std;

class Vehicle
{
    public:
        string name;
        string manufacturer;
        string type;

        Vehicle()
        {
            name = "Swift";
            manufacturer = "Maruti Suzuki";
            type = "Taxi";
        }

        Vehicle(string aName, string aManufacturer, string aType)
        {
            name = aName;
            manufacturer = aManufacturer;
            type = aType;
        };

};

int main()
{
    Vehicle v1;
    v1.name = "Supra";
    v1.manufacturer = "Toyota";
    v1.type = "JDM Car";

    cout << v1.name << endl;
    cout << v1.manufacturer << endl;
    cout << v1.type << "\n" << endl;


    Vehicle v2;
    cout << v2.name << endl;
    cout << v2.manufacturer << endl;
    cout << v2.type << "\n" << endl;


    Vehicle v3("Countach", "Lamborghini", "Supercar");
    cout << v3.name << endl;
    cout << v3.manufacturer << endl;
    cout << v3.type << "\n" << endl;


    return 0;
}