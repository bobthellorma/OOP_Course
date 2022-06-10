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

void callCircle()
{
    circle a = circle(); // constructors inherit from parent
    cout << a.get_colour() << endl;
}

class A{
    protected:
    int _a;

    public:
    A(int a):_a(a){}
    A():A(100){}
    int get_a() const {return _a;}
};

class B : public A{
    private:
    int _r;

    public:
    int foo(){return _a*_r;}
};

void testAB()
{
    B b;
    cout << b.foo();
}

class C{
    protected:
    int _a;

    public:
    C(int a):_a(a){}
    C():C(100){}
    int get_a() const {return _a;}
};

class D : public A{
    private:
    int _r;

    public:
    D():_r(1){};
    int foo(){return _a*_r;}
};

void testDC()
{
    D d;
    cout << d.foo();
}

int main()
{
    testAB();
}
