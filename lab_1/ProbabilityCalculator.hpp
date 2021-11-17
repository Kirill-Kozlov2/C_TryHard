

#ifndef KIRILL_PROBABILITYCALCULATOR_H
#define KIRILL_PROBABILITYCALCULATOR_H

#include "SegmentState.hpp"

class ProbabilityCalculator: public SegmentState {
private :
    State * currentState; 
public:
    explicit ProbabilityCalculator(  int begin = 0  , int end = 100 );
    void setState(State *state);
    double calculateProbabilityFor(int number_of_iteration = 10000);
};


#endif 
