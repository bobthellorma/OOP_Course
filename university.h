#ifndef _UNIVERSITY_H
#define _UNIVERSITY_H
#include <string>
#include "person.h"
using namespace std;

class university
{
    public:
    university(int students,int teachers,string names[], int ages[]);
    person** get_university();

    private:   
    person **persons;     
    //animals = new animal*[size];

};

#endif