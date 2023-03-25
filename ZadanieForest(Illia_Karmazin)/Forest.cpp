#include <iostream>
#include <vector>

using namespace std;

#include "Forest.hpp"
#include "Tree.hpp"

Forest::Forest(int Size , vector<vector<int>>Forest)
{
	size_forest = Size;
	for (int i = 0; i < Size; ++i)
	{
		for (int j = 0; j < 2 * Size; ++j)
		{
			cout << Forest[i][j] << ' ';
		}
		cout << endl;
	}
}

void Forest::AddTree(Tree* obj3)
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
}