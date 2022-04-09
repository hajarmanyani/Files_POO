#include "Professeur.h"
#include <iostream>
Professeur::Professeur(string n, string p, int a, int mat)
	:Personne(n,p,a)
{
	this->matricule = mat;
}

void Professeur::afficher() const
{
	this->Personne::afficher();
	std::cout << "matricule: " << this->matricule << std::endl;
}
