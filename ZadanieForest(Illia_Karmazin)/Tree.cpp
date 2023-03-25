#include <iostream>

using namespace std;

#include "Tree.hpp"
#include "Forest.hpp"

int size_of_forest = 0;

Tree::Tree(string Color , char Symbol, int Height, int X , int Y)
{
	++size_of_forest;
	if (Color == "Red")
		color = "31m";
	else if (Color == "Blue")
		color = "34m";
	else if (Color == "Green")
		color = "32m";
	else if (Color == "Yellow")
		color = "33m";
	else if (Color == "Purple")
		color = "35m";
	else if (Color == "White")
		color = "37m";
	symbol = Symbol;
	height = Height;
	x = X;
	y = Y;
	tab = new int* [height];
	for (int j = 0; j < height; j++) 
	{
		tab[j] = new int[2 * height - 1];
		for (int i = 0; i < 2 * height - 1; i++)
			tab[j][i] = 0;
	}
	for (int j = 0; j < height; j++)
		for (int i = height - j - 1; i < height + j; i++)
			tab[j][i] = size_of_forest;
}

Tree::~Tree()
{
	int j;
	for (j = 0; j < height; j++)
		delete tab[j];
	delete tab;
	cout << "Trees was deleted" << endl;
}