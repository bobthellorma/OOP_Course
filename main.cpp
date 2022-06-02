#include "person.h"
#include "student.h"
#include "teacher.h"
#include "university.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    student Alfred = student("Alfred",32);
    cout << Alfred.get_name() << endl;
    cout << Alfred.get_ID() << endl;
    Alfred.set_name("Bazooka");
    cout << Alfred.get_name() << endl;

    teacher Broom = teacher("Broom",16);
    cout << Broom.get_name() << endl;
    cout << Broom.get_ID() << endl;

    string names[4] = {"Brad", "Chad", "Dorothy", "Heath"};
    int ages[4] = {19,21,41,33};

    university Adelaide = university(2,2,names,ages);
    person** AdelaideUni = Adelaide.get_university();
    cout << AdelaideUni[2]->get_age() << endl;
    cout << AdelaideUni[3]->get_name() << endl;
}