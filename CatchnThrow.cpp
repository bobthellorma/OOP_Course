#include <iostream>
using namespace std;

class A{
    int _age; // defaults to private
    public:
        void set_age(int age){
            if (age < 0){
                throw ("Invalid Age");
            }
            _age = age;
        }
        
};

int main(){
    A a;
    int p = 8;
    if (p < 10)
        cout << "Cunt" << endl;
    
    try{
        a.set_age(-2);
    }
    catch (const char* msg){
        cerr << msg << endl;
    }
    return 0;
}