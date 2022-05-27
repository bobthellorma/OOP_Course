#include <iostream>
using namespace std;

class Student{
    private:
        int id; // Student ID stored as private
    public:
        int count = 0; // initially there are zero students

        Student() // Student constructor
        {
            id = Student::count++; // ID = number of students
        }

        int get_id() // get function
        {
            return id; // returns Student's ID
        }
};

int main()
{
    // create students
    Student s1;
    Student s2;
    Student s3;

    // Print out student IDs
    cout << s1.get_id() << endl;
    cout << s2.get_id() << endl;
    cout << s3.get_id() << endl;
}