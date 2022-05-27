#include <iostream>
using namespace std;

class Student{
    private:
    int id; // Student ID number
    public:
    static int count; // set count to be a static member
    Student(){
        id = Student::count++; // id = no. of students + 1
    }
    int get_id(){
        return id;
    }
};

// must declare static members outside the class
int Student::count = 1;

int main()
{
    Student s1;
    Student s2;
    Student s3;
    cout << s1.get_id() << endl;
    cout << s2.get_id() << endl;
    cout << s3.get_id() << endl;
    // We see that count is not updated each time and remains at zero
    // But if we change count to being a static member, it updates
}