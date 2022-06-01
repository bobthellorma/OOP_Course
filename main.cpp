#include <iostream>
#include <string>
#include "person.h"
#include "student.h"
#include "teacher.h"
#include "university.h"
using namespace std;

 int main()
{   

    // test student class : working
    /*
    student Rory = student(36, "Rory");
    student Britta = student(42, "Britta");
    cout << Rory.get_age() << endl;
    cout << Rory.get_ID() << endl;
    cout << Britta.get_ID() << endl;
    */

    // test teacher class : working
    /*
    teacher Vaughn = teacher(43, "Vaughn");
    teacher Alex = teacher(36, "Alex");
    cout << Vaughn.get_age() << endl;
    cout << Alex.get_name() << endl;
    cout << Alex.get_ID() << endl;
    */

   // test university
   university H = university(4,4,"Adelaide");
   person** AdelaideStaff = H.get_people();
   cout << AdelaideStaff[3]->get_name() << endl;
   cout << AdelaideStaff[6]->get_ID() << endl;
   cout << H.get_name() << endl;
}