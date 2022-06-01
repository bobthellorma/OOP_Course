#include <string>
#include "sort_by_name.h"
using namespace std;

void sort_by_name::sort(animal **animals,int n)	// sorts the array of n animals into ascending order using their names
{
    // check first letter, greater or less than?
    int i,j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
           if (animals[j]->get_name() > animals[j+1]->get_name())
           {
               swap(animals[j], animals[j+1]);
           }
        }
    }
}