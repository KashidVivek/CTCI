#include <iostream>
#include "cstack.h"
using namespace std;

int main(int argc, char const *argv[])
{
	stack obj;
	void three_stacks();
	three_stacks();
	return 0;
}

void three_stacks(){
	obj.push(1);
	obj.push(2);
	obj.push(3);
	obj.push(4);
	obj.push(5);
	obj.push(6);
	obj.display();
}