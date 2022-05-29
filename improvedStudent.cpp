#include <iostream>
using namespace std;

class Student{

    private:
    int id; // Student ID number
    static int count; // set count to be a static member

    public:

    Student(){ // constructor
        id = Student::count++; // id = no. of students + 1
    }

    int get_id(){ // get ID 
        return id;
    }

    static int get_count(){
        return count;
    }
};

// must declare static members outside the class
int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s[2]; // array of 100 students

    // print ID of each of the students in the array
    for (int i = 0; i < 2; i++)
    {
        cout << s[i].get_id() << endl;
    }

    // how many students are there at the end?
    cout << Student::get_count() << endl; 
}