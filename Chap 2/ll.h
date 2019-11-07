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
	void insert(int val);
	void delete_node(node *head,int val);
	node* returnList();
	void display(node *head);
	void remove_duplicates(node *head);
	int kth_last(node *head, int k);
	void delete_middle(node *head);
	node *sum_list(node *list1,node *list2);
	node *head;
	linkedlist(){
		head = nullptr;
	}
};

#endif