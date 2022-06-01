#include "teacher.h"
#include <string>
using namespace std;

teacher::teacher(int Age, string Name)
{
    // try catch and throw where teacher can't be younger than 30
    if (Age < 30)
    {
        throw("Teacher must be older than 30");
    }

    // normal constructor
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