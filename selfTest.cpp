#include <iostream>

using namespace std;

int main()
{
    int i=1,n;
    cout << "Enter upper limit: ";
    cin >> n;

    while(i!=n+1)
    {
        if(i%2==0)
        {
            cout << i << "\n";
        }

        i++;
    }
    
    return 0;
}