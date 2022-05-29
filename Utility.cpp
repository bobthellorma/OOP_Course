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
    int n = 100;
    Student** classroom; // array of pointers to pointers to student objects
    classroom = new Student*[n]; // create new pointer to student object in the heap
    for (int i = 0; i < n; i++)
    {
        classroom[i] = new Student; // create new student in the heap
    }
}