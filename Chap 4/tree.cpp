#include <iostream>
#include "tree.h"
using namespace std;

int main(int argc, char const *argv[])
{
	btree tree;
	tree.insert(10);
	tree.insert(7);
	tree.insert(53);
	tree.insert(14);
	tree.insert(1);
	node *tree_ = tree.return_root();
	tree.preorder(tree_);
	return 0;
}