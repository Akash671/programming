
#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;
};


//T=O(m+n)
//m=len(a)
//n=len(b)
node* merge_sorted_list(node* a,node* b){
	node* res=NULL;

	//base condition
	if(a==NULL){
		return b;
	}
	else if(b==NULL){
		return a;
	}
	else{
		if(a->data<=b->data){
			res=a;// copy node
			res->next=merge_sorted_list(a->next,b);
		}
		else{
			res=b;
			res->next=merge_sorted_list(a,b->next);
		}
		return res;
	}
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
	node* res=NULL;
	node* a=NULL;
	node* b=NULL;



	create_list(&a,1);
	create_list(&a,2);
	create_list(&a,3);
	create_list(&a,5);
	create_list(&b,4);
	create_list(&b,6);
	create_list(&b,8);
	//cout<<"before revese : ";
	//print_list(head);

	//cout<<"\nafter reverse : ";
	//reverse_list(&head);
	//reverse_using_stack(&head);

	res=merge_sorted_list(a,b);
	print_list(res);


	return 0;
}
