#include "../include/Layer.hpp"

Layer::Layer(int size)
{
    this->size =size;

    for(int i=0;i<size;i++)
    {
        Neuron *n=new Neuron(0.00);
        this->neurons.push_back(n);
    }
}