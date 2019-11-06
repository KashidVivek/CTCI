#include<iostream>
#include "ll.h"
using namespace std;

int main(int argc, char const *argv[])
{
	linkedlist obj;
	obj.insert(5);
	obj.insert(6);
	obj.insert(7);
	obj.insert(9);
	obj.insert(3);
	obj.insert(1);
	obj.insert(8);
	obj.insert(5);
	obj.insert(9);
	obj.insert(3);
	obj.insert(1);
	obj.insert(8);
	obj.insert(5);
	obj.insert(10);
	obj.insert(15);
	obj.insert(2);
	node *list = obj.returnList();
	cout<<"Original list: "<<endl;
	obj.display(list);
	cout<<endl;
	obj.delete_middle(list);
	cout<<"After deleting middle element: "<<endl;
	obj.display(list);
	return 0;
}
