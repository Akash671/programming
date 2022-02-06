/*
author : @akash kumar

problem statement:

1->2->3->4->-
|           |
-------------

*/


#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;
};


//your logic here


//create circular_list-------------
node* addToEmpty(node* head,int d){
	if(head!=NULL){
		return head;
	}
	else{
		node* new_node=new node();

		new_node->data=d;
		head=new_node;
		head->next=head;

		return head;
	}
}


node* addToEnd(node* last,int d)
{
	if(last==NULL){
		return addToEmpty(head,d);
	}
	else{
		node* new_node=new node();
		new_node->data=d;

		new_node->next=last->next;
		last->next=new_node;

		last=new_node;

		return last;
	}
}
//----------------------------



void print_list(node* head){
	node* tmp=head->next;

	do{
		cout<<tmp->data<<" ";
		tmp=tmp->next;
	}while(tmp!=head->next);
}

int main(){
	node* head=NULL;

	head=addToEmpty(head,1);
	head=addToEnd(head,2);
	head=addToEnd(head,3);
	head=addToEnd(head,4);

	
	
	print_list(head);


	
	return 0;
}
