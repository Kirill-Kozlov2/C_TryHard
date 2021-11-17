
#ifndef KIRILL_STATE_H
#define KIRILL_STATE_H

#include <iostream>
#include <random>
#include <vector>
#include <string>


class State{
public:
    virtual bool contains(int s) const = 0;
    virtual ~State() = default; 
};


#endif
