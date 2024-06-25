#include <iostream>

using namespace std;

class movie
{
    private:
        double rating;
    public:
        string name;
        string actor;
        //if we put any of these objects(like rating) inside private then only code inside movie class can access that oblect(rating).

    movie(string aName, string aActor, double aRating)
    {
        name = aName;
        actor = aActor;
        setRating(aRating);
    }

    void setRating(double aRating)
    {
        if(aRating == 1.0 || aRating == 2.0 || aRating == 3.0 || aRating == 4.0 || aRating == 5.0)
        {
            rating = aRating;
        }

        else
        {
            rating = 5.0;
        }
        
    }

    double getRating()
    {
        return rating;
    }
};

int main()
{
    movie m1("Iron Man", "Robert Downey Jr.", 4.0);

    
    cout << m1.name << endl;

    

    cout << m1.getRating() << endl;
    // m1.rating = 10;
    // cout << m1.rating;

    return 0;
}