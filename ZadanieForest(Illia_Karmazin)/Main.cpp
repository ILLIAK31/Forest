#include <iostream>
#include <vector>

using namespace std;

#include "Forest.hpp"
#include "Tree.hpp"

int main()
{
	int Height, menu_num, X, Y , size_forest;
	string Color;
	char Symbol ;
	cout << "To create forest give size of it : ";
	cin >> size_forest;
	vector<vector<int> > forest(size_forest, vector<int>(2 * size_forest));
	for (int i = 0; i < size_forest; ++i)
	{
		for (int j = 0; j < 2 * size_forest; ++j)
		{
			forest[i][j] = 0;
		}
	}
	Forest obj2(size_forest,forest);
	do
	{
		cout << "Menu :" << endl << "1. Add tree to forest" << endl << "Enter number : ";
		cin >> menu_num;
		if (menu_num == 1)
		{
			cout << "Enter color : ";
			cin >> Color;
			cout << "Enter symbol : ";
			cin >> Symbol;
			cout << "Enter height : ";
			cin >> Height;
			cout << "Enter X : ";
			cin >> X;
			cout << "Enter Y : ";
			cin >> Y;
			Tree* drzewo = new Tree(Color, Symbol, Height, X, Y);
			obj2.AddTree(drzewo);
		}
		else
		{
			cout << "Wrong number" << endl;
			break;
		}
	}while(true);
    return 0;
}