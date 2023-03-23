#include <iostream>

using namespace std;

#include "Tree.hpp"
#include "Forest.hpp"

Tree::Tree(string Color , char Symbol, int Height)
{
	color = Color;
	symbol = Symbol;
	height = Height;
	tab = new int* [height];
	for (int j = 0; j < height; j++) 
	{
		tab[j] = new int[2 * height - 1];
		for (int i = 0; i < 2 * height - 1; i++)
			tab[j][i] = 0;
	}
	for (int j = 0; j < height; j++)
		for (int i = height - j - 1; i < height + j; i++)
			tab[j][i] = 1;
}