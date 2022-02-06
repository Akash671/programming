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

bool search_element(node* head,int d){
	if(head==NULL){
		return 0;
	}
	else if(head->next==NULL){
		if(head->data==d){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		while(head!=NULL){
			if(head->data==d){
				return 1;
			}
			else{
				head=head->next;
			}
		}
		return 0;
	}
}

//time=O(n);
//space=O(1);

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
	cout<<"\n";
	if(search_element(head,3)){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}


	return 0;
}
