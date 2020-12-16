#include <iostream>
using namespace std;

#include "Neuron.h"
#include "NeuronLayer.h"

int main() {
	Neuron n1, n2;
	NeuronLayer nl1(3), nl2(3);

	n1.connect_to< Neuron >(n2);
	n1.connect_to< NeuronLayer>(nl1);
	nl2.connect_to< Neuron >(n2);
	nl1.connect_to< NeuronLayer>(nl2);
	cin.ignore();
}