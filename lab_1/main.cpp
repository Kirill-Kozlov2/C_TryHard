
#include "ProbabilityCalculator.hpp"
#include "SetOfStates.hpp"
#include "DiscreteState.hpp"


int main (){
    SetOfStates d;
    State *a = new DiscreteState(21);
    State *c = new DiscreteState(22);
    State *b = new SegmentState (1 , 18);
    State *m = new SegmentState (1 , 22);
    State *n = new SegmentState (51 , 100);

    d.pushState(m);
    d.pushState(n);
    d.pushState(c);
    d.pushState(b);
    d.pushState(a);

    ProbabilityCalculator f;
    f.setState(&d);
    std::cout<<f.calculateProbabilityFor(10000)<<std::endl;

}

