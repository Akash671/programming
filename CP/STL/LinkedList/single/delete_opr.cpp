#include <iostream>
using namespace std;


//class node
class node{
public:
	int data;
	node *next;
};


//.....
void create_list(node **head,int d){
	//int d;
	//cout<<"Enter data : ";
	//cin>>d;

	node *new_node=new node();
	new_node->data=d;
	new_node->next=NULL;

	if(*head==NULL){
		*head=new_node;
		return;
	}
	else
	{
		node *tmp=*head;
		while(tmp->next!=NULL){
			tmp=tmp->next;
		}
		tmp->next=new_node;
	}
}


//-------------
void delete_node_beg(node **head){
	if(*head==NULL){
		cout<<"not possible\n";
		return;
	}
	else{
		node *tmp=*head;
		tmp=tmp->next;
		*head=tmp;
	}
}

//-----------------------
node* delete_node_end(node *head){
	if(head==NULL){
		cout<<"not possible\n";
		return NULL;
	}
	else{
		if(head->next==NULL){
			delete head;
			return NULL;
		}
		else{
			node *second_last=head;
			while(second_last->next->next!=NULL){
				second_last=second_last->next;
			}
			delete(second_last->next);
			second_last->next=NULL;
			return head;
		}
	}
}

void delete_at_loc_node(node **head,int d){
	node *tmp=*head;
	node* prev=NULL;

	if(tmp!=NULL && tmp->data==d){
		*head=tmp->next;
		delete tmp;
		return;
	}
	else{
		while(tmp!=NULL && tmp->data!=d){
			prev=tmp;
			tmp=tmp->next;
		}
		if(tmp==NULL){
			cout<<"Not found\n";
			return;
		}
		else{
			prev->next=tmp->next;
			delete tmp;
		}
	}
}

//note----------
/*
free() is a C library function that can also be
 used in C++, while “delete” is a C++ keyword. 
 free() frees memory but doesn't call Destructor
  of a class whereas “delete” frees the memory
 and also calls the Destructor of the class.21-Apr-2021
*/

void print_list(node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}


int main(){
	node *head=NULL;

	//-------------
	create_list(&head,10);
	print_list(head);
	cout<<"\n";

	create_list(&head,20);
	print_list(head);
	cout<<"\n";

	create_list(&head,30);
	print_list(head);
	cout<<"\n";

	create_list(&head,40);
	print_list(head);
	cout<<"\n";

	//--------------------------	
	cout<<"after beg\n";
	delete_node_beg(&head);
	print_list(head);
	cout<<"\n";
	delete_node_beg(&head);
	print_list(head);
	cout<<"\n";
	delete_node_beg(&head);
	print_list(head);
	cout<<"\n";
	delete_node_beg(&head);
	print_list(head);
	cout<<"\n";

    //-----------------------------------
	cout<<"after end\n";
	head=delete_node_end(head);
	print_list(head);
	cout<<"\n";
	
	head=delete_node_end(head);
	print_list(head);
	cout<<"\n";
	
	head=delete_node_end(head);
	print_list(head);
	cout<<"\n";

	head=delete_node_end(head);
	print_list(head);
	cout<<"\n";

	head=delete_node_end(head);
	print_list(head);
	cout<<"\n";

	head=delete_node_end(head);
	print_list(head);
	cout<<"\n";


	//----------------------------------
	cout<<"delete loc node\n";
	delete_at_loc_node(&head,30);
	print_list(head);
	cout<<"\n";


	return 0;
}
