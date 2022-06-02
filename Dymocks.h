#ifndef _DYMOCKS_H
#define _DYMOCKS_H

class Dymocks : public BookStore
{
    public:
    Dymocks();           // Uses the default constructor of parent
    Dymocks(bool o);      // sets isOnline attribute with o
    int get_nextNumStores();
    int get_storeID();
    bool get_isOnline();
    void set_nextNumStores(int n);
    void set_storeID(int s);
    void set_isOnline(bool o);
    float get_onlineTax();

    private:
    static int nextNumStores;
    int storeID;          // unique store ID 
    bool isOnline; 
};

#endif