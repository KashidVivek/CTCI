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

	node *list = obj.returnList();
	cout<<"Kth element from last is: ";
	int answer = obj.kth_last(list,2);
	cout<<answer;
	return 0;
}
