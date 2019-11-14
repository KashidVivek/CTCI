#ifndef ll
#define ll
#include<vector>

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
	node *minimal_tree(node *root,std::vector<int> arr,int l,int r);
	node *root;
	node *newNode(int data);
	int height(node *root);
	void bfs(node *root);
	btree(){
		root = nullptr;
	}
};

#endif