#include <iostream>
#include<vector>
#include<queue>
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

node *btree :: minimal_tree(node *root,vector<int> arr,int l, int r){
	if( l > r){
		return nullptr;
	}
	int mid = (l+r)/2;
	root = newNode(arr[mid]);
	root->left = minimal_tree(root,arr,l,mid - 1);
	root->right = minimal_tree(root,arr,mid+1,r);
	return root;
} 

node* btree :: newNode(int data)  
{  
    node* node1 = new node; 
    node1->val = data;  
    node1->left = NULL;  
    node1->right = NULL;  
  
    return node1;  
}

int btree :: height(node *root){
	if(root == nullptr) return 0;
	int lheight = height(root->left);
	int rheight = height(root->left);

	return lheight>rheight ? lheight+1 : rheight + 1;  
}

void btree :: bfs(node *root){
	queue<node *> q;
	node *current;
	if(root == nullptr) return;
	q.push(root);
	q.push(nullptr);
	while(q.size() > 1){
		current = q.front();
		q.pop();

		if(current == nullptr){
			q.push(nullptr);
			cout<<"\n";
		}
		else{
			if(current->left)
				q.push(current->left);
			if(current->right)
				q.push(current->right);
			cout<<current->val;
		}
	}
}

void btree :: insert_list(ll* head,int val){
	node *temp,*new_node;
	if(head == NULL){
		temp = new node();
		temp->val = val;
		temp->next = nullptr;
		head = temp;
	}
	else{
		temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		new_node = new node;
		new_node->val = val;
		new_node->next = nullptr;
		temp->next = new_node;
	}
} 

ll* btree :: depth_list(node *root){
	queue<node *> q;
	node *current;
	ll* head;
	if(root == nullptr) return nullptr;
	q.push(root);
	q.push(nullptr);
	while(q.size() > 1){
		current = q.front();
		q.pop();

		if(current == nullptr){
			q.push(nullptr);
			//cout<<"\n";
		}
		else{
			if(current->left)
				q.push(current->left);
			if(current->right)
				q.push(current->right);
			insert_list(head,current->val);
		}
	}
	return head;
}

void btree :: display(ll *head){
	node *temp;
    temp=head;
    while(temp!=NULL)
    {
      cout<<temp->val<<"->";
      temp=temp->next;
    }
    cout<<"null";
}