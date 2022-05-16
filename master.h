#ifndef "MASTER_H"
#define "MASTER_H"

// setup
#include <string>
using namespace std;

// abstract class master
class master{   
    
public:

    // virtual functions
    virtual void move() = 0;
    virtual string get_moves() = 0; 

    // defined functions
    char getMove();
    bool win(player* opponent);
    ~Player();

private:

    // variables
    char recent_move;
    int num_moves;
   
};

#endif