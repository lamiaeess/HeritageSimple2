#include "TableauBorne.h"

TableauBorne::TableauBorne(int t, float min, float max): Tableau(t), borne_min(min), borne_max(max)
{}

void TableauBorne::operator()(int index, float valeur)
{
    if (index < 0 || index >= taille) {
       cout << "Erreur : Index hors limites. Modification ignor�e.\n";
        return;
    }
    if (valeur < borne_min || valeur > borne_max) {
        cout << "Erreur : Valeur hors des bornes autoris�es. Modification ignor�e.\n";
        return;
    }
    tableau[index] = valeur;

}
