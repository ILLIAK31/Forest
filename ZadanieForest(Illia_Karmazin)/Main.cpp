#include <iostream>

using namespace std;

#include "Tree.hpp"

int main()
{
	int Height , menu_num;
	string Color;
	char Symbol ;
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
			Tree obj(Color, Symbol, Height);
		}
		else
		{
			cout << "Wrong number" << endl;
			break;
		}
	}while(true);
    return 0;
}