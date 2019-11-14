#ifndef ll
#define ll
struct node{
	public:
		int val;
		node *right;
		node *left;
};

class btree{
public:
	node *insert(node *root, int value);
	node *return_root();
	void insert(int val);
	//void preorder(node *root);
	void preorder(node *root);
	node *root;
	btree(){
		root = nullptr;
	}
};

#endif