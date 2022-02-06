#include<iostream>
using namespace std;


class node{
public:
	int data;
	node *next;
};


//logic........................
void swap_node(node** head,int x,int y){
	if(x==y){
		return;
	}
	else{
		node* prevX=NULL,*currX=*head;
		while (currX && currX->data != x) {
        prevX = currX;
        currX = currX->next;
    }
    node *prevY = NULL, *currY = *head;
    while (currY && currY->data != y) {
        prevY = currY;
        currY = currY->next;
    }
    // If either x or y is not present, nothing to do
    if (currX == NULL || currY == NULL)
        return;
 
    // If x is not head of linked list
    if (prevX != NULL)
        prevX->next = currY;
    else // Else make y as new head
        *head= currY;

    // If y is not head of linked list
    if (prevY != NULL)
        prevY->next = currX;
    else // Else make x as new head
        *head= currX;
 
    // Swap next pointers
    node* temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;

	}
}
//......................................//

void push_node(node** head,int d){
	node* new_node=new node();

	new_node->data=d;
	new_node->next=(*head);

	(*head)=new_node;
}


void print_list(node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}


int main(){
	node *head=NULL;

	push_node(&head,1);
	push_node(&head,2);
	push_node(&head,3);
	push_node(&head,4);
	push_node(&head,5);
	push_node(&head,6);
	push_node(&head,7);
	push_node(&head,8);

	cout<<"before swaping : ";
	print_list(head);

	swap_node(&head,4,8);
	cout<<"\nAfter swaping : ";
	print_list(head);
	return 0;
}
