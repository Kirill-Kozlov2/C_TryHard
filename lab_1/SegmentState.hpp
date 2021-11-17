
#ifndef KIRILL_SEGMENTSTATE_H
#define KIRILL_SEGMENTSTATE_H
#include "State.hpp"

class SegmentState: public State{

protected:
    int const begin;
    int const end;
public:
    SegmentState(): begin(0), end(-1) { }
    SegmentState(int begin, int end): begin(begin), end(end) { }
    bool contains(int s) const override;  
};

#endif 
