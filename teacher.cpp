#include "teacher.h"
#include <string>
using namespace std;

teacher::teacher(string Name, int Age)
{
    name = Name;
    age = Age;
    ID = nextID;
    nextID++;
    title = "Dr";
}

string teacher::get_name()
{
    return name;
}

int teacher::get_lectures()
{
    return lectures;
}

void teacher::set_lectures(int Lec)
{
    lectures = Lec;
}

int teacher::nextID = 1000;