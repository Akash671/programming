/*
author : @akash kumar
problem:


Write a function that moves the last
element to the front in a given Singly Linked List.
For example, if the given Linked List is 1->2->3->4->5, 
then the function should change the list to 5->1->2->3->4.


	*/


#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;
};


//your logic here
//time O(n)

node* move_last_element_to_front(node* head,int k){
	if(head==NULL){
		return head;
	}
	else if(head->next==NULL){
		return head;
	}
	else{

		for(int i=0;i<k;++i){
		node* second_last=NULL;
		node*last=head;

		while(last->next!=NULL){
			second_last=last;
			last=last->next;
		}


		second_last->next=NULL;
		last->next=head;
		head=last;}
	}
	return head;
}

//time=O();
//space=O();

void create_list(node** head,int d){
	node* new_node=new node();

	new_node->data=d;

	new_node->next=NULL;

	if(*head==NULL){
		*head=new_node;
	}
	else{
		node* tmp=*head;
		while(tmp->next!=NULL){
			tmp=tmp->next;
		}
		tmp->next=new_node;
	}
}


void print_list(node* head){
	while(head){
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main(){
	node* head=NULL;

	create_list(&head,0);
	create_list(&head,1);
	create_list(&head,2);
	create_list(&head,3);
	
	print_list(head);
	
	//your logic function here
	cout<<"\n";
	head=move_last_element_to_front(head,2);
	print_list(head);


	return 0;
}
