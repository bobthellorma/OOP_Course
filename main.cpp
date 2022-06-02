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
    
    try{
    student Rory = student(12, "Rory");
    cout << Rory.get_age() << endl;
    cout << Rory.get_ID() << endl;
    }
    catch (const char* msg){
        cerr << msg << endl;
    }
    
    try{
    student Britta = student(42, "Britta");
    cout << Britta.get_ID() << endl;
    }
    catch (const char* msg){
        cerr << msg << endl;
    }
    

    // test teacher class : working
    try{
    teacher Vaughn = teacher(43, "Vaughn");
    cout << Vaughn.get_age() << endl;
    }
    catch(const char* msg){
        cerr << msg << endl;
    }
    try{
    teacher Alex = teacher(28, "Alex");
    cout << Alex.get_name() << endl;
    cout << Alex.get_ID() << endl;
    }
    catch(const char* msg){
        cerr << msg << endl;
    }
    
    // test university
    try{
    university H = university(4,0,"Adelaide");
    person** AdelaideStaff = H.get_people();
    cout << AdelaideStaff[3]->get_name() << endl;
    cout << AdelaideStaff[6]->get_ID() << endl;
    cout << H.get_name() << endl;
    }
    catch(const char* msg){
        cerr << msg << endl;
    }
    
}