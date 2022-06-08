#include <iostream>

int main()
{
    // Q1
    int a[] = {1,3,4};
    int b[3];
    int e[] = {5,6,7};
    //b = a; // cannot assign this way need to go for(i<3) , a[i] = b[i]
    for (int i = 0; i < 3; i++)
    {
        //std::cout << b[i] <<std::endl; // print b; we get random values
    }
    //std::cout << std::endl;


    // Q2
    int* c = new int[3]; // a points to {0,0,0}
    int* d; // empty pointer to an integer

    for (int i = 0; i < 3; i++)
    {
        //std::cout << d[i] <<std::endl; // print d;
        /*
        when only array a is declared, d points to the 1st value of a automatically and it prints out a
        when both arrays a and e are declared, it prints out random values?
        */
    }

    d = c; // address of c is now stored in pointer d
    for (int i = 0; i < 3; i++)
    {
        //std::cout << d[i] <<std::endl; // print d - in this case is pointing to c declared as {0,0,0}
    }
    

    // Q3
    int i = 2, j = 2; // multiple declarations of one line
    int vec[i][j] = {{1,2},{4,5}};
    std::cout << vec[0] << std::endl; // prints out address of 1st element in 1st row
    std::cout << &vec[0][0] << std::endl; // prints out address of 1st element in 1st row (same as line 40)
    std::cout << vec[1] << std::endl; // prints out 1st element in 2nd row (row [1])
    std::cout << &vec[1][0] << std::endl; // same as line 42


}