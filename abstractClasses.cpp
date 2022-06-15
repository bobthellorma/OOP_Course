#include <iostream>
#include <string>
using namespace std;

class Shape{
    public:
    virtual float get_area(){return 0;}; // if I declare this virtual, it uses the derived class version of get_area()
    // if I remove the virtual, it calls this version of the get_area()

    /*
    virtual = call the child class version of that function, if that doesn't exist, run this one
    if function purely virtual, it can never run
    if declared purely virtual, a function cannot be assigned to do something
    */
};

class Circle : public Shape{
    private:
    float r = 10;
    public:
    float get_area(){return r*r*3.14;};
};

class Square : public Shape{
    private:
    float r = 9;
};

void printShape(Shape *s){cout << s->get_area() << endl;}

int main()
{
    Shape *s[2];
    s[0] = new Square();
    s[1] = new Circle();
    printShape(s[0]);
}