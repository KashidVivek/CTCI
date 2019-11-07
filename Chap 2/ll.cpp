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

int linkedlist :: kth_last(node *head,int k){
	node *main_ptr,*ref_ptr;
	main_ptr = head;
	ref_ptr = head;
	while(k != 0){
		ref_ptr = ref_ptr->next;
		k--;
	}

	while(ref_ptr != nullptr){
		main_ptr = main_ptr->next;
		ref_ptr = ref_ptr->next;
	}

	return main_ptr->val;
}

void linkedlist :: delete_middle(node *head){
	node *temp,*previous_node,*next_node,*temp_;
	temp = head;
	int length = 0;
	while(temp != nullptr){
		temp = temp->next;
		length ++;
	}
	if(length == 2){
		cout<<"No middle element to delete"<<endl;
		return;
	}
	int middle = length/2;
	int n = 0;
	temp_ = head;
	while((middle-2) > n){
		temp_ = temp_->next;
		n++;
	}
	previous_node = temp_;
	temp_ = temp_->next;
	next_node = temp_->next;
	previous_node->next = next_node;
}


node* linkedlist :: sum_list(node *list1, node *list2){
	cout<<"Sum:";
	linkedlist l3;
	node *temp1,*temp2;
	temp1 = list1;
	temp2 = list2;
	int carry = 0;
	while(temp1 != nullptr && temp2 != nullptr){
		int value_node = temp1->val + temp2->val + carry;
		if(value_node < 9){
			l3.insert(value_node);
			carry = 0;
		}
		else{
			carry = value_node / 10;
			value_node = value_node % 10;
			l3.insert(value_node); 
		}
		temp1 = temp1->next;
		temp2 = temp2->next;
	}
	if(carry && temp1 ==nullptr && temp2 == nullptr)
		l3.insert(carry);
	node *new_list = l3.returnList();
	return new_list;
}