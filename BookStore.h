#ifndef _BOOKSTORE_H
#define _BOOKSTORE_H
#include <string>
using namespace std;

class BookStore
{
    public:
    BookStore(); // default constructor
    BookStore(string n, string a, int b); // constructor  
    void set_name(string n);
    void set_address(string a);
    void set_numBook(int b);
    string get_name();
    string get_address();
    int get_numBook();
    virtual float get_onlineTax() = 0;

    protected:
    string name;                // the book store name
    string address;             // the book store address
    int numBook;

};

#endif