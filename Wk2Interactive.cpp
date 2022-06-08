#include <iostream>

void addOnetoX(int x)
{
    x += 1; // when function is called, the variable x is given its own local address
    std::cout << &x << std::endl;
    //return &x; // returning address of local variable, variable will be deleted after this function and hence will result in error
}

void modifyMemory(int* a) // modifies the value attached to the memory and returns nothing
{
    *a += 1;
}

int* returnMemory(int* a) // modifies the value attached to the memory and returns a pointer to it
{
    *a += 1;
    return a;
}

int* createInHeap(int x)
{
    int* count = new int[4]; // assign value 32
    count[1] = 32;
    return count;
}

int main()
{
    const int d = 4;
    int x = 100;
    int *p = createInHeap(x);
    std::cout << *p << std::endl;
    delete p; // delete what p points to in the heap
}