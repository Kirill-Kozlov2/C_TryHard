
#include "SetOfStates.hpp"

void SetOfStates::pushState(State *state) {
    states.push_back(state);
}

bool SetOfStates::contains(int s) const {

    return std::any_of(states.begin(),states.end(),[&s](State *state) {return state->contains(s);});

}
