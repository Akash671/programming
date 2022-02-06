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


//method 1 using two pointer
node* delete_duplicate(node* head){
	//1->2->2->3->3->3
	//1->2->3


	node *ptr1,*ptr2,*dup;
	ptr1=head;


	while(ptr1!=NULL && ptr1->next!=NULL){
		ptr2=ptr1;

		while(ptr2->next!=NULL)
		{
			if(ptr1->data==ptr2->next->data){
				dup=ptr2->next;
				ptr2->next=ptr2->next->next;
				delete(dup);
			}
			else{
				ptr2=ptr2->next;
			}
		}
		ptr1=ptr1->next;
	}

	return head;
}

//time=O(n^2);
//space=O();





//method 2 using hash.....................	
//time=O(n)
//space O(1)
node* delete_duplicate_using_hash(node* head)
{
	node* curr=head;
	node* prev=head;

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

	create_list(&head,1);
	create_list(&head,2);
	create_list(&head,2);
	create_list(&head,3);
	create_list(&head,3);
	create_list(&head,3);
	
	print_list(head);
	cout<<"\n";
	//head=delete_duplicate(head);
	head=delete_duplicate_using_hash(head);
	//your logic function here
	print_list(head);


	return 0;
}
