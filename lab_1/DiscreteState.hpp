

#ifndef KIRILL_DISCRETESTATE_H
#define KIRILL_DISCRETESTATE_H
#include "State.hpp"

class DiscreteState: public State{
private:
    int const state;

public:
    explicit DiscreteState(int state): state(state) { } 

    bool contains(int s) const override ;
};

#endif 
