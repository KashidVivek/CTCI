#include<iostream>
#include "ll.h"
using namespace std;

int main(int argc, char const *argv[])
{
	linkedlist obj;
	obj.insert(5);
	obj.insert(6);
	obj.insert(7);
	obj.insert(8);
	node *list = obj.returnList();
	obj.display();
	void removeDuplicates(node *list);
	return 0;
}