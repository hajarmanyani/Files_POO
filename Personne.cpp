#include "Personne.h"

Personne::Personne(string n, string p, int age)
{
	this->nom = n; 
	this->prenom = p; 
	this->age = age;
}

void Personne::afficher() const
{
	std::cout << "nom: " << this->nom << std::endl;
	std::cout << "prenom: " << this->prenom << std::endl;
	std::cout << "age: " << this->age << std::endl;
}

