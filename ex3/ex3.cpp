
// ex3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Employe.h"
#include"Responsable.h"
#include"Commercial.h"
int main()
{
	Employe emp1("bahhar", 12000);
	emp1.afficher();
	cout << endl;
	Employe emp2("zakaria", 13000);
	emp2.afficher();
	cout << endl;
	Employe emp3("toto", 12200);
	emp3.afficher();
	cout << endl;

	
	Responsable rep1(emp1, emp2);
	rep1.afficherResponsableDirect();
	cout << endl;
	Responsable rep2(emp2, emp3);
	rep2.afficherResponsableIndirect();
	cout << endl;

	Commercial c1("tata", 15000,25);
	c1.calculerSalaire();
	c1.afficher();
	return 0;
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
