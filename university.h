#include "person.h"
#include "student.h"
#include "teacher.h"
#include <string>
#ifndef _UNIVERSITY_H
#define _UNIVERSITY_H
using namespace std;

class university
{
    public:
    university(int students, int teachers, string Name);
    string get_name();
    person** get_people();

    private:
    string name;
    person **persons;

};


#endif