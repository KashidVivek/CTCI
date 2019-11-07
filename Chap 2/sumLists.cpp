#include<iostream>
#include "ll.h"
using namespace std;

int main(int argc, char const *argv[])
{
	linkedlist l1,l2,obj;
	l1.insert(7);
	l1.insert(1);
	l1.insert(6);
	l2.insert(5);
	l2.insert(9);
	l2.insert(2);
	node *list1 = l1.returnList();
	node *list2 = l2.returnList();
	node *list = obj.sum_list(list1,list2);
	obj.display(list);
	return 0;
}
