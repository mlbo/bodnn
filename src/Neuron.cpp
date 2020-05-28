#include "../include/Neuron.hpp"
#include <math.h>

Neuron::Neuron(double val)
{
    this->val =val;
    activate();
    derive();
}

//Sigmoid激活函数
//f(x)=x/(1+|x|)
void Neuron::activate()
{
    this->activatedVal = this->val / (1 + abs(this->val));
}

//激活函数导数
//f'(x)=f(x)*(1-f(x))
void Neuron::derive()
{
    this->derivedVal = this->activatedVal * (1 - this->activatedVal);
}