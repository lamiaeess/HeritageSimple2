#pragma once
#include <iostream>
using namespace std;
class Tableau
{
protected:
    float* tableau;
    int taille;
public:
    Tableau(int t);
    ~Tableau();
    float& operator[](int index);
};

