#include <iostream>
#include <vector>

using namespace std;

#include "Forest.hpp"
#include "Tree.hpp"

Forest::Forest(int Size , vector<vector<int>>Forest)
{
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
	if (((obj3->height) + (obj3->y)) > size_forest)
	{
		cout << "Tree to big for this forest" << endl;
		return;
	}
	if (((obj3->x) + ((2 * (obj3->height)) - 1)) > size_forest)
	{
		cout << "Tree to big for this forest" << endl;
		return;
	}
	wektor.push_back(obj3);
}