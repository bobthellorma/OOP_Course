#ifndef _TEACHER_H
#define _TEACHER_H
#include "person.h"
#include <string>
using namespace std;

class teacher : public person
{
    public:
    teacher(string Name, int Age);
    string get_name();
    int get_lectures();
    void set_lectures(int Lec);

    private:
    int lectures;
    static int nextID;

};

#endif