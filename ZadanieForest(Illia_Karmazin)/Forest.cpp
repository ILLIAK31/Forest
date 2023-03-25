#include <iostream>
#include <vector>

using namespace std;

#include "Forest.hpp"
#include "Tree.hpp"

Forest::Forest(int Size , vector<vector<int>>Forest)
{
	size_forest = Size;
	//print test
	for (int i = 0; i < Size; ++i)
	{
		for (int j = 0; j < 2 * Size; ++j)
		{
			cout << Forest[i][j] << ' ';
		}
		cout << endl;
	}
	//
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
			Forest[y][x] = obj3->tab[y2][x2];
		}
		x = (obj3->x) - 1;
	}
	// print test
	/*for (int y2 = 0; y2 < size_forest; ++y2)
	{
		for (int x2 = 0; x2 < (2 * size_forest); ++x2)
		{
			cout << Forest[y2][x2] << ' ';
		}
		cout << endl;
	}
	*/
}