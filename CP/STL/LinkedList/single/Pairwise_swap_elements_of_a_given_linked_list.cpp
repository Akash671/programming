/*
author : @akash kumar
problem:


Input : 1->2->3->4->5->6->NULL 
Output : 2->1->4->3->6->5->NULL

Input : 1->2->3->4->5->NULL 
Output : 2->1->4->3->5->NULL

Input : 1->NULL 
Output : 1->NULL 
 
*/


#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;
};


//your logic here


//simple method
//time=O(n)
node* pair_wise_swap(node* head){
	if(head==NULL){
		return head;
	}
	else if(head->next==NULL){
		return head;
	}
	else{
		//logic here
		node* tmp=head;

		while(tmp && tmp->next){
			swap(tmp->data,tmp->next->data);
			tmp=tmp->next->next;
		}
		return head;
	}
}


//method 2 recursion
//time=O();
//space=O();

node* pair_wise_swap_recuirsion(node* head){
	while(head && head->next){
		swap(head->data,head->next->data);
		pair_wise_swap_recuirsion(head->next->next);
	}
	return head;
}

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

	//head=pair_wise_swap(head);
	head=pair_wise_swap_recuirsion(head);
	print_list(head);


	return 0;
}
