#include <iostream>
#include "tree.h"
using namespace std;

node* btree :: insert(node *root,int value){
	if(root == nullptr){
		root = new node;
		root -> val = value;
		root -> left = nullptr;
		root -> right = nullptr;
	}
	else{
		if(value > root->val){
			root -> right = insert(root->right,value);
		}
		else if (value < root->val){
			root -> left = insert(root->left,value);
		}
	}
	return root;
}

node *btree :: return_root(){
	return root;
}

void btree :: insert(int val){
	root = insert(root,val);
}

void btree :: preorder(node *root){
	if(root == nullptr) return;
	cout<<root->val<<" ";
	preorder(root->left);
	preorder(root->right);
} 