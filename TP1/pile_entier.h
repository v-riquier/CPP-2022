#pragma once
#include <iostream>
class pile_entier
{
	int *pile, taille, hauteur;
public:
	pile_entier(int);
	~pile_entier();
	void empile(int);
	int depile();
	int pleine();
	int vide();
};