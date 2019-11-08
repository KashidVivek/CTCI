#include<iostream>
#include "ll.h"
using namespace std;

int main(int argc, char const *argv[])
{
	linkedlist obj;
	obj.insert(5);
	obj.insert(6);
	obj.insert(7);
	obj.insert(6);
	obj.insert(5);
	node *list = obj.returnList();
	bool answer = obj.check_palindrome(list);
	cout<<std::boolalpha<<answer;
	//obj.recursion_print(list);
	return 0;
}
