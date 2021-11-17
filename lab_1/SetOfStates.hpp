
#ifndef KIRILL_SETOFSTATES_H
#define KIRILL_SETOFSTATES_H
#include "State.hpp"
#include <algorithm>

class SetOfStates: public State{;
private:
    std::vector<State*> states;


public:
    bool contains(int s)  const override;
    void pushState(State *state); 

};

#endif 
