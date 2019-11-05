#ifndef ll
#define ll
struct node{
	public:
		int val;
		node *next;

		/*node(){
			val = value;
			next = nullptr;
		}*/
};

class linkedlist{
public:
	void *insert(int val);
	node *delete_node(int val);
	node* returnList();
	void display();
	node *head;
	linkedlist(){
		head = nullptr;
	}
};

#endif