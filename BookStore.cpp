#include "BookStore.h"
#include <string>
using namespace std;

BookStore::BookStore()
{
    //numBook = 0;
    // default constructor
} 

BookStore::BookStore(string n, string a, int b) // constructor  
{
    name = n;
    address = a;
    if (b >=0 ){
    numBook = b;
    }
    else
    {
        b=0;
    }
}

void BookStore::set_name(string n)
{
    name = n;
}

void BookStore::set_address(string a)
{
    address = a;
}

void BookStore::set_numBook(int b)
{
    if (b >= 0){
    numBook = b;
    }
}

string BookStore::get_name()
{
    return name;
}

string BookStore::get_address()
{
    return address;
}

int BookStore::get_numBook()
{
    return numBook;
}


