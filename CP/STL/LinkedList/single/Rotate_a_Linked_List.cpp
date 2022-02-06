/*
author : @akash kumar
problem:

To rotate the linked list, we need to change the next
 of kth node to NULL, the next of the last node to the
  previous head node, and finally, change the head to 
  (k+1)th node. So we need to get hold of three nodes: 
  kth node, (k+1)th node, and last node. 
Traverse the list from the beginning and stop at kth node.
 Store pointer to kth node. We can get (k+1)th node using 
 kthNode->next. Keep traversing till the end and store a 
 pointer to the last node also. Finally, change pointers as stated above.



*/


#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;
};


//your logic here
node* rotate_list(node* head,int k){
	if(k==0){
		return head;
	}
	else{
		if(head==NULL){
			return head;
		}
		else{
			//logic
			node* current=head;

			int c=1;

			while(c<k && current->next!=NULL){
				c++;
				current=current->next;
			}

			if(current==NULL){
				return head;
			}
			else{
				node* kthnode=current;

				while(current->next!=NULL){
					current=current->next;
				}
				current->next=head;
				head=kthnode->next;
				kthnode->next=NULL;
				return head;
			}
		}
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
	create_list(&head,3);
	
	print_list(head);
	cout<<"\n";
	head=rotate_list(head,2);
	//your logic function here
	print_list(head);
	return 0;
}
