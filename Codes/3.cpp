#include <iostream>

using namespace std;

int main()
{
    int a;
    string phrase = "Money is Power";
    string phrasesub = phrase.substr(6,7);
    phrase[0] = 'm';

    cout << "Hello Hunny\n";
    cout << "What's up buddy?" << endl;
    cout << " " << endl;

    cout << phrase << "\n";

    // scanf("%d", &a);
    // printf("%d is a lucky number\n", a);

    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    cout << phrase.find("Power", 0) << endl; //here we are finding Power starting from 0th index
    cout << phrase.substr(6, 7) << endl; // first parameter is starting index, secoond perimeter is index of no. of characters to take after starting index
    cout << phrasesub << endl;


    return 0;
}