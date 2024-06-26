#include <iostream>
#include <cmath>

using namespace std;

int cube(int num);

int main()
{
    int answer;
    answer = cube(5);

    cout << answer << endl;
    
    return 0;
}

int cube(int num)
{
    int result = num * num * num;
    return result;
    cout << "Hello \n"; //return statement means end of this block of code so anything after return keyword will not get executed
}