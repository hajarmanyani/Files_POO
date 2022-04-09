#include "Roue.h"
#include <iostream>
using namespace std;
Roue::Roue()
{
	std::cout << "costructeur sans parametres (Roue)" << std::endl;
}


Roue::Roue(double diam)
{
	this->diam = diam;
	std::cout << "costructeur avec parametres (Roue)" << std::endl;
}

Roue::~Roue()
{
	std::cout << "destructeur (Roue)" << std::endl;
}
