#include <iostream>

using namespace std;

class Book
{
    public:
        string name;
        string author;
        int pages;
};

class Business
{
    public:
        string name;
        string owner;
        int netWorth;
};

int main()
{
    Book book1;
    book1.name = "Rich Dad Poor Dad";
    book1.author = "Robert T. Kiyosaki";
    book1.pages = 500;

    cout << book1.name << endl;
    cout << book1.pages << endl;
    cout << book1.author << endl;

    cout << "\nNow let's talk about buisness\n";

    Business b1;
    b1.name = "Hellet Enterprises";
    b1.owner = "Harsh Lakra";
    b1.netWorth = 500000000;
    
    cout << b1.name << endl;
    cout << b1.owner << endl;
    cout << b1.netWorth << " Crores" << endl;

    return 0;
}