class Tree
{
private:
	friend class Forest;
	string color;
	char symbol;
	int height , x , y;
	int** tab;
public:
	Tree(string Color , char Symbol , int Height,int X , int Y);
	~Tree();
};
