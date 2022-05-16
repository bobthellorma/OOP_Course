// setup
#include <string>
using namespace std;
#include "master.h"

char master::getMove(){
    return recent_move; // return most recent move player has made
}

bool master::win(player* opponent){ // opponent points to object player

    // myMove (you can call a variable within the class) accesses the player's move
    // opponent->getMove() gets the opponent's move. 

    if (myMove ==  opponent->getMove()){
    return false;
    }

    else if (myMove == 'P' && opponent->getMove() == 'S')
    // return true
    // return true for win, return false otherwise
}

// default destructor
master::~Player(){

}