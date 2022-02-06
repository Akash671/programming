/*
author : @akash kumar

problem statement:



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


node* addToEnd(node* head,int d)
{
	if(head==NULL){
		return addToEmpty(head,d);
	}
	else{
		node* new_node=new node();
		new_node->data=d;

		new_node->next=head->next;
		head->next=new_node;

		head=new_node;

		return head;
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
