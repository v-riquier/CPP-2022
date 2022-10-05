#include <iostream>
#include "pile_entier.h"
using namespace std;
int main()
{
	int hauteur, selection, plein, vid;
	bool option = true;
	cout << "Hello World!\n";
	cout << "taille de la pile : ";
	cin >> hauteur;
	pile_entier *test = new pile_entier(hauteur);
	while (option) {
		cout << "1 - ajouter un nombre dans la pile" << endl;
		cout << "2 - suppprimer un nombre dans la pile" << endl;
		cout << "3 - verifier si la pile est pleine" << endl;
		cout << "4 - verifier si la pile est vide" << endl;
		cout << "Autre - fin du programme" << endl;
		cin >> selection;
		switch (selection) {
		case 1:
			plein = test->pleine();
			if (plein == 0) {
				int envoi;
				cout << "Nombre a ajouter : ";
				cin >> envoi;
				test->empile(envoi);
			}
			else cout << "La pile est pleine" << endl;
			break;
		case 2:
			vid = test->vide();
			if (vid == 0) {
				int recep = test->depile();
				cout << "Valeur supprimee : " << recep << endl;
			}
			else cout << "La pile est vide" << endl;
			break;
		case 3:
			plein = test->pleine();
			if (plein == 1) cout << "La pile est pleine" << endl;
			else cout << "La pile n'est pas pleine" << endl;
			break;
		case 4:
			vid = test->vide();
			if (vid == 1) cout << "La pile est vide" << endl;
			else cout << "La pile n'est pas vide" << endl;
			break;
		default:
			option = !option;
			break;
		}
	}
	test->~pile_entier();
}