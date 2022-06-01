#ifndef _PERSON_H
#define _PERSON_H
#include <string>
using namespace std;

class person{

public:
person(); // default constructor
person(string Name, int Age); // constructor
virtual string get_name() = 0; // purely virtual function
int get_age();
int get_ID();
void set_name(string new_name);
void set_age(int new_age);

protected:
int personID;
string name;
int age;
string title;

};


#endif