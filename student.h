#include "person.h"
#ifndef _STUDENT_H
#define _STUDENT_H
#include <string>
using namespace std;

class student : public person
{
    public:
    student(string Name, int Age);// constructor
    string get_name(); // define inherited virtual function
    int get_assignments();
    void set_assignments(int NumAss);

    private:
    int assignments;
    static int nextID;

};


#endif