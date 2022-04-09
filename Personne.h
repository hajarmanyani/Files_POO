#pragma once
#include <iostream>
using namespace std;
class Personne
{
public:
	Personne(string n, string p, int age);
	virtual void afficher() const; //8
private:
	string nom;  //40
	string prenom; //40
	int age; //4
	
};

