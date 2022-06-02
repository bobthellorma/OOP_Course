#include "university.h"
#include "person.h"
#include "teacher.h"
#include "student.h"
#include <string>
using namespace std;

university::university(int students,int teachers,string names[], int ages[])
{
    persons = new person*[students+teachers];

    for (int i = 0; i < students; i++)
    {
        persons[i] = new student("Potassium",19);
    }

    for (int i = students; i <students+teachers; i++)
    {
        persons[i] = new teacher("Ronald",37);
    }

    for (int i = 0; i < students+teachers; i++)
    {
        persons[i]->set_name(names[i]);
        persons[i]->set_age(ages[i]);
    }
}

person** university::get_university()
{
    return persons;
}
