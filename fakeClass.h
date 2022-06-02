#include "BookStore.h"
#ifndef _FAKECLASS_H
#define _FAKECLASS_H

class fakeClass : public BookStore
{
    public:
    fakeClass();
    float get_onlineTax();

};

#endif