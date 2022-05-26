#ifndef _STUDENT_H
#define _STUDENT_H
#include <string>
#include "person.h"

class student : public person
{
    public:
    student(std::string studName, int data);
    int getSemester();

    private:
    int semester;
};

#endif