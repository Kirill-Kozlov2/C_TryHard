
#include "ProbabilityCalculator.hpp"

ProbabilityCalculator::ProbabilityCalculator(int begin, int end) : SegmentState(begin, end) {
    currentState = nullptr;
}

void ProbabilityCalculator::setState(State *state) {
    currentState =  state;
}

double ProbabilityCalculator::calculateProbabilityFor(int number_of_iteration) {

    if (currentState == nullptr)
        return -1;

    int iteration = 0;
    double success = 0;
    int res_of_random = 0;

    while ( iteration != number_of_iteration)
    {
        res_of_random  = this->begin + rand() % this->end + 1;
        iteration++;
        if  ( currentState->contains(res_of_random) )
            success++;
    }
    double res = success / number_of_iteration;
    return (res);
}




