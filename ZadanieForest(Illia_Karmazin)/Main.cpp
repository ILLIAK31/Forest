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
	cout << "To create forest give size of it (Size must be bigger than 0): ";
	cin >> size_forest;
	cout << "Size of forest gona be " << size_forest << "x" << 2 * size_forest << endl;
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
		cout << endl << "Menu :" << endl << "1. Add tree to forest" << endl << "2. Print forest" << endl << "3. Exit" << endl << "Enter number : ";
		cin >> menu_num;
		if (menu_num == 1)
		{
			cout << endl << "Enter color (Red , Blue , Green , Yellow , Purple , White) : ";
			cin >> Color;
			if ((Color != "Red") && (Color != "Blue") && (Color != "Green") && (Color != "Yellow") && (Color != "Purple") && (Color != "White"))
			{
				cout << endl << "Wrong color" << endl;
				break;
			}
			cout << "Enter symbol : ";
			cin >> Symbol;
			cout << "Enter height : ";
			cin >> Height;
			cout << "Enter X ( From " << "1 to " << 2*size_forest << " ) : ";
			cin >> X;
			if (size_forest == 1)
				cout << "Enter Y (Only 1 can be Y) : ";
			else
				cout << "Enter Y ( From " << "1 to " << size_forest << " ) : ";
			cin >> Y;
			Tree* drzewo = new Tree(Color, Symbol, Height, X, Y);
			obj2.AddTree(drzewo,*&forest);
		}
		else if (menu_num == 2)
		{
			obj2.PrintForest(forest);
		}
		else if (menu_num == 3)
		{
			break;
		}
		else
		{
			cout << "Wrong number" << endl;
			break;
		}
	}while(true);
	forest.clear();
	cout << endl << "Trees was deleted" << endl;
    return 0;
}