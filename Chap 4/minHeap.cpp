#include<iostream>
using namespace std;

class minHeap
{
public:
	minHeap();
	~minHeap();
	int size = 10;
	int capacity = 10;
	int *heap = nullptr;
	heap = new int[capacity];
	int getLeftChildIndex(int index){ return 2*index +1 ;}
	int getRightChildIndex(int index) {return 2*index +2 ;}
	int getParentIndex(int index){return (index-1)/2 ;}
 
	bool hasLeftChild(int index) {return (getLeftChildIndex(index) < size) ;}
	bool hasRightChild(int index) {return getRightChildIndex(index) < size ;}
	bool hasParent(int index) {return getParentIndex(index) < size ;}

	int getLeftChild(int index) { return heap[getLeftChildIndex(index)] ;}
	int getRightChild(int index){ return heap[getRightChildIndex(index)] ;}
	int getParent(int index){ return heap[getParentIndex(index)] ;}

	void ensureCapacity();
	int peek();
	int poll();
	void add(int item);
	
};


void minHeap :: ensureCapacity(){
	if(size = capacity){
		capacity *= 2;
		int *temp = new int[capacity];
		for(int i=0; i< size; i++){
			temp[i] = heap[i];
		}
		delete [] heap;
		heap = temp;
	}
}

int minHeap :: peek(){
	if(size == 0){
		cout<<"UnderFlow";
		return -1;
	}
	return heap[0];
} 

int minHeap :: poll(){
	if(size == 0){
		cout<<"UnderFlow";
		return -1;
	}
	int item = heap[0];
	heap[0] = heap[size - 1];
	size --;
	heapifyDown();
	return item;
}

void minHeap :: add (int item){
	ensureCapacity();
	heap[size] = item;
	size ++;
	heapifyUp();
}

int main(int argc, char const *argv[])
{
	return 0;
}