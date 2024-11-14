#pragma once
#include "Tableau.h"
class TableauBorne :
    public Tableau
{
    float borne_min;
    float borne_max;

public:
    TableauBorne(int t, float min, float max);
    void operator()(int index, float valeur);
};

