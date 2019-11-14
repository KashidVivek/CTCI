#ifndef cstack
#define cstack

class stack{
public:
	int* a = nullptr;
	a = new int[20];
	void push(int val,int a[]);
	void pop();
	int top(int a[]);
	void display(int a[]);
	int top = 0;
};
#endif