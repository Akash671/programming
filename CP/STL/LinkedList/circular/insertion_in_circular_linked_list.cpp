#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;
};



node* insert_in_empty(node* head,int d)
{
	if(head!=NULL)
	{
		return head;
	}
	else{
		node* tmp=new node();

		tmp->data=d;
		head=tmp;

		head->next=head;

		return head;
	}
}


node* insert_in_end(node* head,int d)
{
	if(head==NULL){
		return insert_in_empty(head,d);
	}
	else{
		node* tmp=new node();
		tmp->data=d;

		tmp->next=head->next;
		head->next=tmp;
		head=tmp;


		return head;
	}
}


node* insert_in_front(node* head,int d)
{
	if(head==NULL)
	{
		return insert_in_empty(head,d);
	}
	else{
		node* tmp=new node();

		tmp->data=d;
		tmp->next=head->next;

		head->next=tmp;
		//head=tmp;


		return head;
	}
}


node* insert_in_a_loc(node* head,int d,int k)
{
	if(head==NULL)
	{
		return NULL;
	}
	else{
		node* tmp;
		node* p;
		p=head->next;

		do{
			if(p->data==k){
				tmp=new node();

				tmp->data=d;
				tmp->next=p->next;

				p->next=tmp;

				if(p==head)
				{
					head=tmp;
				}
				return head;
			}
			//return head;
			p=p->next;
		}while(p!=head->next);

		return head;
	}
}


void print_list(node* head){
	node* ans=head->next;

	do{
		cout<<ans->data<<" ";
		ans=ans->next;
	}while(ans!=head->next);
	cout<<"\n";
}


int main()
{
	node* head=NULL;

	head=insert_in_empty(head,1);

	print_list(head);
	head=insert_in_front(head,5);
	head=insert_in_front(head,6);

	print_list(head);


	head=insert_in_end(head,2);
	head=insert_in_end(head,3);
	head=insert_in_end(head,4);
	print_list(head);



	insert_in_a_loc(head,10,3);
	print_list(head);
	// print_list(head);
	return 0;
}