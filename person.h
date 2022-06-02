#ifndef _PERSON_H
#define _PERSON_H
#include <string>
using namespace std;

class person
{
    public:
    person(); // default constructor
    person(string Name, int Age);
    string get_title();
    virtual string get_name() = 0; // purely virtual function
    int get_ID();
    int get_age();
    void set_name(string Name);
    void set_age(int Age);

    protected:
    string name;
    int age;
    int ID;
    string title;

};

#endif