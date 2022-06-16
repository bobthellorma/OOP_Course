#include <iostream>
using namespace std;

int main()
{
    int rows = 2, cols = 2;
    int a[rows][cols] = {{1,2},{7,4}};

    cout << a << endl;
    cout << *(a[0]+2) << endl;
}