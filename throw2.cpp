#include <iostream>
using namespace std;

class A{
    int _age;
    public:
    void set_age(int age){
        if (age < 0)
        {
            throw("Invalid Age");
        }
        _age = age;
    }
};

int main()
{
    A a;
    try{
        a.set_age(-5);
    }catch(const char* msg){
        cerr << msg << endl;
    }
    return 0;
}