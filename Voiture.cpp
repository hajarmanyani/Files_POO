#include "Voiture.h"
#include <iostream>
using namespace std;
Voiture::Voiture()
{
	this->r1 = new Roue(); 
	this->r2 = new Roue();
	this->r3 = new Roue();
	this->r4 = new Roue();
	std::cout << "costructeur sans parametres (voiture)" << std::endl;
	this->vitesse = 0;
}

Voiture::Voiture(int v, Roue *r1, Roue *r2, Roue *r3, Roue *r4)
{
	this->r1 = r1; 
	this->r2 = r2;
	this->r3 = r3;
	this->r4 = r4;
	std::cout << "costructeur avec parametres (voiture)" << std::endl;
	this->vitesse = v;
}

Voiture::~Voiture()
{
	delete this->r1; 
	delete this->r2;
	delete this->r3;
	delete this->r4;

	std::cout << "destructeur  (voiture)" << std::endl;

}
