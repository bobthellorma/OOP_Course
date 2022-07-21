#include <iostream>
using namespace std;

void printAge(int Age)
{
    if (Age < 0){
        throw("Age is too low");
    }

    else if (Age > 120){
        throw("Age is too high");
    }
    cout << Age << endl;
}

int main()
{
    try{
    printAge(-5);}
    catch(const char* msg){
    cerr << "Error: " << msg << endl;
    }
}