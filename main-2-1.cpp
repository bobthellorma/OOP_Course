#include "BookStore.h"
#include "Dymocks.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Dymocks FirstStore = Dymocks("True");
    cout << FirstStore.get_name() << endl;
    cout << FirstStore.get
}