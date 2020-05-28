#ifndef _LAYER_HPP_
#define _LAYER_HPP_

#include <iostream>
#include <vector> 
#include "Neuron.hpp"
// using std::vector;
class Layer
{
public:
    Layer(int size);

private:
    int size;
    vector<Neuron *> neurons;
};

#endif