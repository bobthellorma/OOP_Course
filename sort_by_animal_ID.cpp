#include <string>
#include "sort_by_animal_ID.h"
using namespace std;

void sort_by_animal_ID::sort(animal **animals,int n)
{
    int i,j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
           if (animals[j]->get_ID() > animals[j+1]->get_ID())
           {
               swap(animals[j], animals[j+1]);
               
           }
        }
    }
}