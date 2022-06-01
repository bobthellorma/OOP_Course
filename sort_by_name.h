#include <string>
#include "zoo.h"
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include "sort_by_name.h"
using namespace std;

class sort_by_name{
    public:
    static void sort(animal **animals, int n);
};