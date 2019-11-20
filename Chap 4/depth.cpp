#include <iostream>
#include "tree.h"
using namespace std;

int main(int argc, char const *argv[])
{
	btree tree;
	tree.insert(4);
	tree.insert(2);
	tree.insert(6);
	tree.insert(1);
	tree.insert(3);
	tree.insert(5);
	tree.insert(7);
	node *tree_ = tree.return_root();
	tree.display(tree.depth_list(tree_));
	return 0;
}