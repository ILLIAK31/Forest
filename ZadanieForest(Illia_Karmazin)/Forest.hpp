#include <vector>
class Forest
{
private:
	friend class Tree;
	vector<Tree*> wektor;
	int size_forest;
public:
	Forest(int Size , vector<vector<int>>&Forest);
	~Forest();
	void PrintForest(vector<vector<int>> &Forest);
	void AddTree(Tree * obj3 , vector<vector<int>>&Forest);
};
