#include "ll.h"
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void linkedlist :: insert(int val){
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

void linkedlist :: display(node *head){
	node *temp;
    temp=head;
    while(temp!=NULL)
    {
      cout<<temp->val<<"->";
      temp=temp->next;
    }
    cout<<"null";
}

node *linkedlist :: returnList(){
	return head;
}

void linkedlist :: delete_node(node *head,int val){
	node *temp,*previous_node,*next_node;
	temp=head;
	if(head->val == val){
		head = head->next;
	}
	while(temp->next->val != val){
		temp = temp->next;
	}
	previous_node = temp;
	temp = temp->next;
	next_node = temp->next;
	previous_node->next = next_node;
}

void linkedlist :: remove_duplicates(node *head){
	node *temp;
	temp = head;
	vector<int>originals;
	while(temp != nullptr){
		int original = temp->val;
		if(!count(originals.begin(),originals.end(),original)){
			originals.push_back(original);
		}
		else{
			delete_node(head,temp->val);
		}
		temp = temp->next;
	}
}