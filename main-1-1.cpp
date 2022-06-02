#include "BookStore.h"
#include "fakeClass.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    fakeClass a = fakeClass();
    a.set_address("45");
    a.set_numBook(36);
    cout << a.get_numBook() << endl;
}