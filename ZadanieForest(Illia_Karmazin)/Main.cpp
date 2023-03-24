#include <iostream>

using namespace std;

#include "Forest.hpp"
#include "Tree.hpp"

int main()
{
	int Height , menu_num , X , Y;
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
			cout << "Enter X : ";
			cin >> X;
			cout << "Enter Y : ";
			cin >> Y;
			//Tree obj(Color, Symbol, Height);
			//code here
		}
		else
		{
			cout << "Wrong number" << endl;
			break;
		}
	}while(true);
    return 0;
}