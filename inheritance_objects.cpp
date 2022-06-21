#include <iostream>
using namespace std;

class Parent{
    public:
    Parent(){cout << "+Parent ";}
    void print_numbers(){cout << "3" << endl;}
};

class Child : public Parent {
    public:
    Child(){cout << "+Child ";}
    void print_numbers(){cout << "3" << endl << "4" << endl;}
};

int main()
{
    Parent Daddy;
    Parent* Son = new Child;
    Daddy.print_numbers();
    Son->print_numbers();
    

    /*int a[2][3] = {{1,4,5},{7,6,8}};
    cout << **(a+1) << endl;
    */

}

