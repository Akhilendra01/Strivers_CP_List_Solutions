#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

struct LinkedList{
	Node* head;
	int length;
	LinkedList(){
		head=NULL;
		length=0;
	}
	Node* createNode(int dat){
		Node* p=(Node*)malloc(sizeof(Node));
		p->data=dat;
		p->next=NULL;
		return p;
	}
	void insert(int dat){
		length++;
		Node* p=createNode(dat);
		if(head==NULL){
			head=p;
			return;
		}

		Node* it=head;
		while(it->next!=NULL)it=it->next;
		it->next=p;
	}
	void insert(int dat, int idx){
		if(idx>length+1){
			cout<<"Out of bounds"<<endl;
			return;
		}
		length++;
		Node* p=createNode(dat);
		if(idx==1){
			p->next=head;
			head=p;
			return;
		}
		Node* it=head;
		while(idx-->2)it=it->next;
		p->next=it->next;
		it->next=p;
	}

	void remove(int idx){
		if(idx>this->length){
			cout<<"Out of bounds"<<endl;
			return;
		}
		length--;
		if(idx==1){
			Node *p=head;
			head=head->next;
			free(p);
			return;
		}
		Node* it=head;
		while(idx-->2)it=it->next;
		Node *p=it->next;
		it->next=p->next;
		free(p);
	}


	Node* reverse(Node* head){
		if(head->next==NULL)return head;
		Node* newHead=reverse(head->next);
		head->next->next=head;
		head->next=NULL;
		return newHead;
	}

	void display(){
		Node* it=head;
		while(it!=NULL){
			cout<<it->data<<" ";
			it=it->next;
		}
		cout<<endl;
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
	ll.display();

	ll.insert(69, 5);
	ll.display();
	ll.remove(1);
	ll.display();
	ll.insert(1, 1);
	ll.display();

	ll.head=ll.reverse(ll.head);
	ll.display();

	return 0;
}