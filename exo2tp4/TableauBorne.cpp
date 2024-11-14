#include "TableauBorne.h"

TableauBorne::TableauBorne(int t, float min, float max): Tableau(t), borne_min(min), borne_max(max)
{}

void TableauBorne::operator()(int index, float valeur)
{
    if (index < 0 || index >= taille) {
       cout << "Erreur : Index hors limites. Modification ignorée.\n";
        return;
    }
    if (valeur < borne_min || valeur > borne_max) {
        cout << "Erreur : Valeur hors des bornes autorisées. Modification ignorée.\n";
        return;
    }
    tableau[index] = valeur;

}
