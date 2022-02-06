/*
Input: Head of following linked list 
1->2->3->4->NULL 
Output: Linked list should be changed to, 
4->3->2->1->NULL

Input: Head of following linked list 
1->2->3->4->5->NULL 
Output: Linked list should be changed to, 
5->4->3->2->1->NULL

Input: NULL 
Output: NULL

Input: 1->NULL 
Output: 1->NUL
*/



#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;
};


//main logic to reverse................
//Time Complexity: O(n) 
//Space Complexity: O(1)
void reverse_list(node** head){
	if(*head==NULL || (*head)->next==NULL)
	{
		return;
	}
	else{
			node* current=*head;
			node* prev=NULL;
			node* next=NULL;

			while(current!=NULL){
				next=current->next;
				current->next=prev;
				prev=current;
				current=next;
			}
			*head=prev;
	}
}

//second method using stack

void reverse_using_stack(node** head){
	stack<node*>s;
	node* tmp=*head;

	while(tmp->next!=NULL){
		s.push(tmp);
		tmp=tmp->next;
	}
	*head=tmp;

	while(!s.empty()){
		tmp->next=s.top();
		s.pop();
		tmp=tmp->next;
	}

	tmp->next=NULL;
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
	create_list(&head,3);
	create_list(&head,4);
	create_list(&head,5);
	create_list(&head,6);
	cout<<"before revese : ";
	print_list(head);

	cout<<"\nafter reverse : ";
	//reverse_list(&head);
	reverse_using_stack(&head);
	print_list(head);


	return 0;
}
