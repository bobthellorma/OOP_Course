#include "university.h"
#include "string"
using namespace std;

university::university(int students, int teachers, string Name)
{
    if (students < 0 || teachers < 0 || students + teachers < 1)
    {
        throw ("Invalid input arguments");
    }
    // create initial array
    persons = new person*[students + teachers];
    name = Name;

    // fill array
    for (int i = 0; i < students; i++)
    {
        persons[i] = new student(19,"Fergus");
    }

    for (int i = students; i < teachers + students; i++)
    {
        persons[i] = new teacher(41, "Belle");
    }
}

string university::get_name()
{
    return name;
}

person** university::get_people()
{
    return persons;
}