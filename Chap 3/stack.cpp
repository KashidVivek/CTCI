#include "cstack.h"
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void stack :: push(int val,int a[]){
	if(top >= 20){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		top++;
		a[top] = val;	
	}
	
}

void stack :: pop(){
	if(top<=-1)
      	cout<<"Stack Underflow"<<endl;
   else {
      top--;
   }
}

int stack :: top(){
	return a[top];
}

void stack :: display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
         cout<<a[i]<<" ";
         cout<<endl;
   } else
      cout<<"Stack is empty";
}