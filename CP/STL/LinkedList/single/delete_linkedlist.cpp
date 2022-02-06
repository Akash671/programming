//delete lineked list

#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
};

//main logic
void delete_list(node** head){
	node* current_node=*head;
	node* next=NULL;

	while(current_node!=NULL){
		next=current_node->next;
		free(current_node);

		current_node=next;
	}

	*head=NULL;
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
	if(head==NULL){
		cout<<"empty";
	}
	else{
		while(head){
			cout<<head->data<<" ";
			head=head->next;
		}
	}
}


int main(){

	node* head=NULL;
	create_list(&head,1);
	create_list(&head,2);
	create_list(&head,3);
	create_list(&head,4);
	create_list(&head,5);

	cout<<"before deleting list : ";
	print_list(head);


	cout<<"\nafter deleting list : ";
	delete_list(&head);
	print_list(head);


	return 0;
}