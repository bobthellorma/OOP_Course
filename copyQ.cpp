#include <iostream>
using namespace std;

class B{
    private:
    int ID;
    public:
    virtual void printOut(){cout << "Love it";};
    B(){cout << " +B";}
    ~B(){cout << " -B";}
};

class C : public B{
    public:
    void printOut(){cout << "Not a fan";};
    C(){cout << " +C";}
};

class A{
    private:
    B *b;
    public:
    //A(){b = new B[2];
    //cout << " +A";}
    //~A(){cout << " -A";
    //delete[] b;}
};

int main()
{
    //A a;
    cout << endl;
    C c;
    B *name = new C;
    name->printOut(); // calls the B version unless B version is virtual
    c.printOut(); // calls the C version

    // you'll notice more couts after the line ends, as the program terminates,
    // the program automatically calls the destructor
}