#ifndef _STUDENT_H
#define _STUDENT_H
#include "person.h"
using namespace std;


class student : public person{
    public:
    student(int Age, string Name);
    int get_assignments();
    void set_assignments(int numAss);
    string get_name(); // to replace purely virtual in parent class

    protected:
    static int nextID;
    int assignments;
};

#endif