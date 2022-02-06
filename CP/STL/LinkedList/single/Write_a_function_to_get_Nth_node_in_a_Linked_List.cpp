/*
author : @akash kumar
problem:

*/


#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;
};


//your logic here

int Nth_node(node* head,int nth)
{
	for(int i=0;i<nth;++i){
		head=head->next;
	}
	return head->data;
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
	//print_list(head);
	int ans=Nth_node(head,2);
	cout<<endl;
	cout<<ans;


	return 0;
}
