#include <string>
#include "zoo.h"
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include "sort_by_animal.h"
using namespace std;

class sort_by_animal{
    public:
    static void sort(animal **animals,int n);	
};