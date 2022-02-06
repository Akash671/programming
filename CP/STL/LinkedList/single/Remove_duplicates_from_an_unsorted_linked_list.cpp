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
//using hashing techniques
node* remove_dup_from_unsorted_array(node* head){
	if(head==NULL){
		return head;
	}
	else if(head->next==NULL){
		return head;
	}
	else{
		node* prev=head;
		node* curr=head;

		unordered_set<int>s;
		while(curr!=NULL){
			if(s.find(curr->data)!=s.end()){
				prev->next=curr->next;
				delete(curr);
			}
			else{
				s.insert(curr->data);
				prev=curr;
			}
			curr=prev->next;

		}
		return head;
	}
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
	create_list(&head,2);
	
	print_list(head);
	cout<<"\n";
	head=remove_dup_from_unsorted_array(head);
	//your logic function here
	print_list(head);


	return 0;
}
