#include "teacher.h"
#include <string>
using namespace std;

teacher::teacher(int Age, string Name)
{
    age = Age;
    name = Name;
    title = "Dr ";
    personID = nextID;
    nextID++;
}

string teacher::get_name()
{
    return (title + name);
}

int teacher::get_lectures()
{
    return lectures;
}

void teacher::set_lectures(int new_lectures)
{
    lectures = new_lectures;
}

int teacher::nextID = 1000;