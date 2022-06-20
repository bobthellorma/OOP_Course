#include <iostream>
using namespace std;

int main()
{
    int rows = 3, cols = 2;
    int a[rows][cols] = {{1,2},{3,5},{7,4}};

    for (int i = 0; i < 6; i++)
    {
        cout << *(a+i) << endl;
    }
    
    /*for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j];
        } 
        cout << endl;
    }
    */
}