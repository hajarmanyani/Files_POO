#pragma once
#include<iostream>
#include <assert.h>
using namespace std;
template <class T>
class Tableau
{
private:
	int taille;
	T* tab;
public:
	Tableau(int taille);
	void afficher();
	void push(T element,int index);
	void sort_p();
	~Tableau();



};

template<class T>
Tableau<T>::Tableau(int taille)
{
	this->taille = taille;
	this->tab = new T[taille];

}

template<class T>
void Tableau<T>::afficher()
{
	for (int i = 0; i < taille; i++) {
		cout << this->tab[i] << endl;
	}
}

template<class T>
void Tableau<T>::push(T element, int index)
{
	assert(index >= 0 && index < taille);
	this->tab[index] = element;
}


template<class T>
void Tableau<T>::sort_p()
{
	T k;
	for (int i = 0; i < taille; i++) {
		k = this->tab[i];
		for (int j = i + 1; j < taille; j++) {
			if (k > this->tab[j]) {
				k = this->tab[j];
				this->tab[j] = this->tab[i];
				this->tab[i] = k;
		}
		
		}
	}
	
}

template<class T>
Tableau<T>::~Tableau()
{
	delete[] this->tab;
	this->tab = 0;
}
