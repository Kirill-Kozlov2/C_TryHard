
#include "SegmentState.hpp"

bool SegmentState::contains(int s) const {

    return s >= begin && s <= end;

}
