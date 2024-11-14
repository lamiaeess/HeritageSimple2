// exo2tp4.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "TableauBorne.h"

int main()
{
	TableauBorne tb(5, 0.0f, 10.0f);
	tb(0, 5.5f);
	tb(1, 3.3f);

	//affichage
	for (int i = 0; i < 5; ++i)
	{
		cout << tb[i] << " ";

	}
	cout << endl;
	tb(2, 15.0f);
	return 0;


}


