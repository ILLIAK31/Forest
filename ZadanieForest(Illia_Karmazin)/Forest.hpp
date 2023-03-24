#include <iostream>
#include <vector>
using namespace std;

class Forest
{
private:
	vector<Tree*> wektor;
public:
	void AddTree(Tree* Obj);
};
