#include <iostream>
#include <vector>
#include <windows.h>  

using namespace std;

#include "Forest.hpp"
#include "Tree.hpp"

Forest::Forest(int Size , vector<vector<int>>&Forest)
{
	size_forest = Size;
}

Forest::~Forest()
{
	for (auto obj : wektor)
	{
		delete obj;
		obj = NULL;
	}
	wektor.clear();
	cout << "Forest wad deleted";
}

void Forest::AddTree(Tree* obj3 , vector<vector<int>>&Forest)
{
	if (((obj3->height) + ((obj3->y)-1)) > size_forest)
	{
		cout << "Tree too big for this forest" << size_forest << endl;
		return;
	}
	if ((((obj3->x)-1) + ((2 * (obj3->height)) - 1)) > (2*size_forest))
	{
		cout << "Tree too big for this forest" << endl;
		return;
	}
	wektor.push_back(obj3);
	int x = (obj3->x)-1, y = (obj3->y)-1;
	for (int y2 = 0; y2 < (obj3->height); ++y2 , ++y)
	{
		for (int x2 = 0; x2 < ((2 * (obj3->height)) - 1); ++x2 , ++x)
		{
			if (((obj3->tab[y2][x2]) == 0) && (Forest[y][x] != '0'))
				continue;
			Forest[y][x] = obj3->tab[y2][x2];
		}
		x = (obj3->x) - 1;
	}
}

void Forest::PrintForest(vector<vector<int>> &Forest)
{
	
	/*
	int index;
	for (int i = 0; i < size_forest; ++i)
	{
		for (int j = 0; j < 2*size_forest; ++j)
		{
			if (Forest[i][j] == '0')
				cout << ' ';
			else
			{
				index = (int)Forest[i][j];
				cout << "\033[1;" << wektor[index-1]->color << wektor[index-1]->symbol << "\033[0m" ;
			}
		}
		cout << endl;
	}
	*/
}