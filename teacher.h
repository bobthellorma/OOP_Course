#ifndef _TEACHER_H
#define _TEACHER_H
#include <string>
#include "person.h"
using namespace std;

class teacher : public person
{
    public:
    teacher(int Age, string Name);
    string get_name();
    int get_lectures();
    void set_lectures(int new_lectures);

    protected:
    static int nextID;
    int lectures;

};




#endif