#ifndef _NEURON_HPP_
#define _NEURON_HPP_
#include<iostream>
#include <math.h>
using namespace std;
class Neuron
{
public:
    Neuron(double val);

    void setVal(double v);
    //Sigmoid激活函数
    //f(x)=x/(1+|x|)
    void activate();

    //激活函数导数
    //f'(x)=f(x)*(1-f(x))
    void derive();

    //获取值
    double getVal() { return this->val; }
    double getActivatedVal() { return this->activatedVal; }
    double getDerivedVal() { return this->derivedVal; }

private:
    //1.5
    double val;
    //0-1
    double activatedVal;
    double derivedVal;
};

#endif