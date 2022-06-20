#include <iostream>
#include <string>
using namespace std;

class Book{
    public:
    string title;
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

struct Ape{
    public:
        string age;
        Ape(string a): age(a){cout << "+Ape" << endl;}
        Ape():Ape(0){cout << "+Ape" << endl;}
        ~Ape(){cout << "-Ape " << endl;}
};

int main()
{
    Ape* a = new Ape;
    *a.~Ape();
}