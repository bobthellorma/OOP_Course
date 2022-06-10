#include <iostream>
#include <string>
using namespace std;

class Shape2D
{
    private:
    double _cX;
    double _cY;
    string _colour;

    public:
    Shape2D(double cX, double cY, string colour):
    _cX(cX), _cY(cY), _colour(colour){}
    Shape2D():Shape2D(0,0,"white"){};
    string get_colour(){return _colour;}
};

class circle : public Shape2D
{

};

int main()
{
circle a = circle(); // constructors inherit from parent
cout << a.get_colour() << endl;
}
