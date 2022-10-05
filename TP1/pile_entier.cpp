#include "pile_entier.h"

pile_entier::pile_entier(int ta = 20) {
	taille = ta;
	pile = new int[taille];
	hauteur = 0;
}

pile_entier::~pile_entier() {
	delete pile;
}

void pile_entier::empile(int nombre) {
	pile[hauteur] = nombre;
	hauteur++;
}

int pile_entier::depile() {
	hauteur--;
	int nombre = pile[hauteur];
	return nombre;
}

int pile_entier::pleine() {
	if (hauteur == taille) return 1;
	else return 0;
}

int pile_entier::vide() {
	if (hauteur == 0) return 1;
	else return 0;
}