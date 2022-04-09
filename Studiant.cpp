#include "Studiant.h"
#include <iostream>
Etudiant::Etudiant(string n, string p, int a,int cne)
	: Personne(n,p,a)
{
	this->cne = cne;
}

void Etudiant::afficher() const
{
	this->Personne::afficher();
	std::cout << "cne: " << this->cne << std::endl;
}

void Etudiant::afficher1() const {
	std::cout << this->cne << std::endl;
}