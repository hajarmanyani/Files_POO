// STL_Algor_mapG4.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <map>

using namespace std;

bool ispaladrom(string s)
{
    bool pladrom = true; 
    stack<char> st; 
    for (int i = 0; i <s.length(); i++)
    {
        st.push(s.at(i));
    }
    int i = 0;
    while (!st.empty())
    {
        if (st.top() != s.at(i)) {
            pladrom = false;
            break;
        }
        else {
            i++;
            st.pop();
        }     
    }
    return pladrom;
}

int main()
{
   
    map<string, int> mymap{ {"Dijkstra", 19}, {"Scott", 19}, {"Dijkstra", 10} };
    std::cout << mymap["Dijkstra"]; 
    for (auto p : mymap) 
        std::cout << "{" << p.first << "," << p.second << "}";


     



    /*
    string mots;
    cout << "donnez les mots" << endl;
    cin >> mots;

    cout << ispaladrom(mots);

    priority_queue<int>qu;
    qu.push(10);
    qu.push(100);
    qu.push(55);
    qu.push(90);
    qu.push(0);
    while(!qu.empty()) {
        cout << qu.top() << endl;
        qu.pop();
    }


    */






       

  /* int size;
    cout << "donnez un nmre" << endl;
    cin >> size;

    deque<string> dq1; // deque dont la taille est 0
    list<string> list1;
    string mots;
    for (int i = 0; i <size; i++)
    {
        cout << "donnez un mot" << endl;
        cin >> mots;
        dq1.push_back(mots);

    }
    cout << "*************deque***************" << endl;
    deque<string>::iterator it = dq1.begin();
    for (it; it!= dq1.end(); it++)
    {
        cout << *it<< endl;
    }

    //deque<string>::iterator it = dq1.begin();
    for (it = dq1.begin(); it != dq1.end(); it++)
    {
        list1.push_back(*it);
    }

    cout << "*************list***************" << endl;
    list1.sort();
    list<string>::iterator it2 = list1.begin();
    for (it2; it2 != list1.end(); it2++)
    {
        cout << *it2<< endl;
    }

    */

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
