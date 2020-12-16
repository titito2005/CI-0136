#pragma once
#include <vector>
using namespace std;

#include "Neuron.h"
#include "Neurons.h"

// Este uso de la herencia no es muy apropiado porque una NeuronLayer NO 
// es un ejemplo de vector< Neuron >, es decir, NO es un vector lo que implica
// que se heredan muchos métodos que no tienen sentido para un NeuronLayer.
class NeuronLayer : public vector < Neuron >, public Neurons< NeuronLayer >
{
public:
	// Construye una NeuronLayer con "count" neuronas.
	NeuronLayer(int count);
	~NeuronLayer();
};

NeuronLayer::NeuronLayer(int count)
{
	while (count-- > 0)
		emplace_back(Neuron{});
}

NeuronLayer::~NeuronLayer()
{
}
