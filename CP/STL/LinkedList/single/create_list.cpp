#include<iostream>
using namespace std;

class node{
	public:
	  int data;
	  node *next;
};

//node* head=NULL;

void create(node** head){
	cout<<"Enter data : ";
	int d;
	cin>>d;

	node *new_node=new node();
	new_node->data=d;
	new_node->next=NULL;

	if(*head==NULL){
		(*head)=new_node;
	}
	else{
		node *tmp=(*head);
		while(tmp->next!=NULL){
			tmp=tmp->next;
		}
		tmp->next=new_node;
	}
}


void insert_node_beg(node** head){
	int d;
	cout<<"Enter data : ";
	cin>>d;

	node *new_node=new node();
	new_node->data=d;
	new_node->next=NULL;

	if(*head==NULL){
		*head=new_node;
		return;
	}
	else{
		new_node->next=*head;
		*head=new_node;
	}
}

void insert_node_at_loc(node** head){
   int d;
   cout<<"Enter data : ";
   cin>>d;
   node *new_node=new node();
	new_node->data=d;
	new_node->next=NULL;
   int loc;
   cout<<"Enter loc : ";
   cin>>loc;

   if(*head==NULL){
   	cout<<"Not possible";
   	return;
   }
   else{
   	node *tmp=*head;
   	node *tmp2=*head;

   	   	for(int i=1;i<=loc;++i){
   		tmp2=tmp;
   		tmp=tmp->next;
   	}
   	tmp2->next=new_node;
   	new_node->next=tmp;
   }
}

void print_node(node *head){
	node *tmp=head;
	while(tmp){
		cout<<tmp->data<<" ";
		tmp=tmp->next;
	}
}



int main(){
	node* head=NULL;
	create(&head);
	print_node(head);
	cout<<"\n";
	create(&head);
	print_node(head);
	cout<<"\n";
	create(&head);
	print_node(head);
	cout<<"\n";
	create(&head);
	print_node(head);
	cout<<"\n";
	insert_node_beg(&head);
	print_node(head);

	cout<<"------------";
	cout<<"\n";
	insert_node_beg(&head);
	print_node(head);

	cout<<"\n";
	insert_node_beg(&head);
	print_node(head);

	cout<<"\n";
	insert_node_beg(&head);
	print_node(head);

	cout<<"----------";
	cout<<"\n";
	insert_node_at_loc(&head);
	print_node(head);

	cout<<"\n";
	insert_node_at_loc(&head);
	print_node(head);

	cout<<"\n";
	insert_node_at_loc(&head);
	print_node(head);

	cout<<"\n";
	insert_node_at_loc(&head);
	print_node(head);


	return 0;
}
																																																						
