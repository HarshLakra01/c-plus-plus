#include <iostream>

using namespace std;

class CGPA
{
    public:
        string name;
        string course;
        double cgpa;

        bool isStudious()   //object function is defined inside class and it can use objects defined in class to do operations.
        {
            if(cgpa >= 7.5)
            {
                return true;
            }
            else{
                return false;
            }
        }
};

int main()
{
    CGPA c1;
    c1.name = "Harsh Lakra";
    c1.course = "B.Tech";
    c1.cgpa = 7.73;

    cout << c1.isStudious() << endl;

    return 0;
}