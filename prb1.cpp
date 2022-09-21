#include<bits/stdc++.h>
using namespace std;



struct Node{
	int data;
	Node* next;
};

struct LinkedList{
	Node* head;
	LinkedList(){
		head=NULL;
	}

	Node* createNode(int data){
		Node* p=(Node*)malloc(sizeof(Node));
		p->data=data;
		p->next=NULL;
		return p;
	}

	void insert(int data){
		Node* p=createNode(data);
		if(head==NULL){
			head=p;
			return;
		}
		Node* it=head;
		while(it->next!=NULL)it=it->next;
		it->next=p;
	}
};

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	LinkedList ll;
	ll.insert(1);
	ll.insert(2);
	ll.insert(3);
	ll.insert(4);
	ll.insert(5);
	ll.insert(6);
	ll.insert(7);
	

	return 0;
}