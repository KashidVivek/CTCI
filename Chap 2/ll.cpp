#include "ll.h"
#include<iostream>
using namespace std;

void *linkedlist :: insert(int val){
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

void linkedlist :: display(){
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