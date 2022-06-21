#include <iostream>
using namespace std;

struct test{
    int* p = new int(4);
    test(){};
    test(int _p){
        int* p = new int(_p);
    }
};

int main()
{
    // shallow copy
    test a1;
    test a2 = a1; // this results in a2.p and a1.p pointing at the same place
    *a1.p = 6;
    cout << "(" << *a1.p << "," << *a2.p  << ")" << endl; // will print out (6,6)

    // deep copy
    test a3;
    int a3_p = *a3.p;
    test a4(a3_p);
    cout << *a4.p << endl;
    *a3.p = 7;
    cout << *a4.p << endl;
}