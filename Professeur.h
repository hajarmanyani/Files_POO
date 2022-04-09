#pragma once
#include"Personne.h"
class Professeur: public virtual  Personne
{
public: 
	Professeur(string n, string p, int a,int mat);
	void afficher() const override;
private: 
	int matricule; //88
};

