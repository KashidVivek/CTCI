#include<iostream>
#include "tree.h"
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
	btree tree;
	node *root;
	
	node *tree_ = tree.minimal_tree(root,arr,0,arr.size()-1); 
	tree.preorder(tree_);
	return 0;
}