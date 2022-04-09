// Agg_vs_Compo.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Roue.h"
#include"voiture.h"
#include "Salle.h"
#include "Mur.h"
#include "Table.h"
#include "Amphi.h"
#include "Tableau.h"

using namespace std;

/*float minimum(int x, int y) {
    return (x < y) ? x : y;
}
template <class T>
T MODULO(T a, T b) {
    return a % b;
}
*/
int main()
{/*
    Roue* r1 = new Roue(13);
    Roue* r2 = new Roue(13);
    Roue* r3 = new Roue(13);
    Roue* r4 = new Roue(13);
    {
    Voiture v(12,r1,r2,r3,r4);
    }
    r1->diam = 12;
    //COMPOSITION
    Mur *M1 = new Mur(122);
    M1->afficher();
    Mur* M2 = new Mur(167);
    {Salle S(455, M1, M2);}
    M2->afficher();
    
    //AGREGATION
    Table* Table1 = new Table(177);
    Amphi AMP1(Table1);
    Amphi AMP2(Table1);
    Table1->afficher();
    delete Table1;
    // std::cout << minimum(10, 20)<<std::endl;
    int a = 5;
    int b = 9;
    std::cout << "Le modulo est " << MODULO<int>(a,b)<< std::endl;
    */
    Tableau<int>* T1 = new Tableau<int>(2);
    T1->push(8, 0);
    T1->push(4, 1);
   
    T1->afficher();
    T1->tri();
    T1->afficher();
    
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
