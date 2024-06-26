#include <iostream>

using namespace std;

class Book
{
    public:
        string name;
        string author;
        int pages;
        Book(string name)
        {
            cout << "Book name is " << name << endl;
            cout << "I am here inside you." << endl;
        }
};

class Business
{
    public:
        string name;
        string owner;
        int netWorth;

        Business()
        {
            name = "ABC Enterprises";
            owner = "XYZ";
            netWorth = 123;
        }

        Business(string aName, string aOwner, int aNetWorth)
        {
            name = aName;
            owner = aOwner;
            netWorth = aNetWorth;
        }
};

int main()
{
    Book book1("Rich Dad Poor Dad");
    book1.name = "Rich Dad Poor Dad";
    book1.author = "Robert T. Kiyosaki";
    book1.pages = 500;

    cout << book1.name << endl;
    cout << book1.pages << endl;
    cout << book1.author << endl;

    cout << "\nNow let's talk about buisness\n";

    Business b1("Hellcat Enterprises", "Harsh Lakra", 500000000);
    // b1.name = "Hellet Enterprises";
    // b1.owner = "Harsh Lakra";
    // b1.netWorth = 500000000;
    
    cout << b1.name << endl;
    cout << b1.owner << endl;
    cout << b1.netWorth << " Crores" << endl;

    cout << "Now, let's move to business 2\n";

    Business b2;
    cout << b2.name << endl;
    cout << b2.owner << endl;
    cout << b2.netWorth << " Crores" << endl;

    return 0;
}