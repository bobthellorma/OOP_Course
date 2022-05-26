#ifndef _PERSON_H
#define _PERSON_H
#include <string>

class person
{
    public:
    std::string get_name(); // gets name
    person(std::string personName); // default constructor
    ~person(); // default destructor

    protected:
    std::string name; // stored name
};

#endif