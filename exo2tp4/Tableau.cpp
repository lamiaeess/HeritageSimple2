#include "Tableau.h"
using namespace std;


Tableau::Tableau(int t) : taille(t)
{
    tableau = new float[taille];
    for (int i = 0; i < taille; ++i) {
        tableau[i] = 0.0f; // Initialiser les valeurs
    }
}

Tableau::~Tableau()
{
    delete[] tableau;
}

float& Tableau::operator[](int index)
{
    if (index < 0 || index >= taille) {
        cout << "Erreur : Index hors limites. Retourne le premier élément par défaut.\n";
        return tableau[0];
    }
    return tableau[index];
}
