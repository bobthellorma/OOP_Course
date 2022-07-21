#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book{
    public:
    string title;
    void printing(){cout << "parent";}
};

void firstQ()
{
    Book* b1 = new Book[2];
    Book* b2 = new Book[2];

    b1[0].title = "Book 11";
    b1[1].title = "Book 12";
    b2[0].title = "Book 21";
    b2[1].title = "Book 22";

    cout << b1[0].title << endl;
}

class Ape : public Book{
    public:
        string age;
        Ape(string a): age(a){cout << "+Ape" << endl;}
        Ape():Ape(0){cout << "+Ape" << endl;}
        ~Ape(){cout << "-Ape " << endl;}
        void printing(){cout << "child";}
};

struct Point{
    int x = 10;
    int y = 7;
};

void Deez(const int a)
{
    //a += 2;
    cout << a;
}

struct test{
    int* p = new int(4);
};

int main()
{
    //Ape* a = new Ape;
    //*a.~Ape();

    /*vector<Point> v;
    vector<Point>::iterator e;
    v.resize(10);
    for (e = v.begin(); e < v.end(); e++)
    {
        cout << e->y;
    }
    */
   int* peter = new int(4);
   //cout << peter << endl;
   int a = 6;
   string pete;
   char emin;
   //cout << emin << endl;

    // using test struct
    test a1;
    test a2 = a1;
    *a1.p = 6;
    cout << *a1.p << *a2.p << endl;

    int* e;
    cout << e << endl;

    /*Ape * ent = new Book; // you cannot call new parent class and have a pointer as child class
    ent->printing();
    */

}