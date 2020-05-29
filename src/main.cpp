#include <iostream>
#include "../include/Neuron.hpp"
#include "../include/Matrix.hpp"

using namespace std;

int main()
{
    /*
    //Input
    Neuron *n1 = new Neuron(0.9);
    Neuron *n1 = new Neuron(0.5);
    Neuron *n1 = new Neuron(0.1);

    //Output
    Neuron *outputNeuron = new Neuron(0.0);

    //  90% confident that [0.9,0.5,0.1] is a dog
    */
    // Neuron *n = new Neuron(1.5);
    // cout << "Val " << n->getVal() << endl;
    // cout << "Activated Val " << n->getActivatedVal() << endl;
    // cout << "Derived Val " << n->getDerivedVal() << endl;

    Matrix *m =new Matrix(3,2,true);
    m->printToConsole();

    return 0;
}