#include <iostream>
using namespace std;


class node{
public:
	int data;
	node *next;
};

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

void print_node(node *head){
	node *tmp=head;
	while(tmp){
		cout<<tmp->data<<" ";
		tmp=tmp->next;
	}
}


int count_node(node *head){
	int c=0;

	if(head==NULL){
		return c;
	}
	else{
		while(head!=NULL){
			c++;
			head=head->next;
		}
		return c;
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
	//insert_node_beg(&head);
	print_node(head);
	cout<<"\n";

	//count
	int ans=count_node(head);
	cout<<ans<<endl;

	return 0;
}
