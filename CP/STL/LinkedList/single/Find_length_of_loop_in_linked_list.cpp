/*
author : @akash kumar
problem:
Find length of loop in linked list


Ans:

Approach: It is known that Floyd’s Cycle detection 
algorithm terminates when fast and slow pointers meet 
at a common point. It is also known that this common 
point is one of the loop nodes. Store the address of 
this common point in a pointer variable say (ptr).
Then initialize a counter with 1 and start from the
common point and keeps on visiting the next node and 
increasing the counter till the common pointer is reached again. 
At that point, the value of the counter will be equal to 
the length of the loop.

Algorithm:  

1)Find the common point in the loop by using 
the Floyd’s Cycle detection algorithm
2)Store the pointer in a temporary variable and keep a count = 0
3)Traverse the linked list until the same node is 
4)reached again and increase the count while moving to next node.
Print the count as length of loop


Complexity Analysis:  

Time complexity:O(n). 
Only one traversal of the linked list is needed.
Auxiliary Space:O(1). 
As no extra space is required
*/


#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;
};


//your logic here

int count_loop_length(node* slow_p){
	int ans=1;
	node* tmp=slow_p;

	while(tmp->next!=slow_p){
		ans++;
		tmp=tmp->next;
	}
	return ans;
}

int detect_loop(node* head){
	node* slow_p=head;
	node* fast_p=head;

	while(slow_p && fast_p && fast_p->next){
		slow_p=slow_p->next;
		fast_p=fast_p->next->next;

		if(slow_p==fast_p){
			return count_loop_length(slow_p);
		}
	}
	return 0;
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
	create_list(&head,4);

	//create loop...........
	//head->next->next->next->next=head;
	head->next->next->next->next->next = head->next;
	//print_list(head);
	

	int ans=detect_loop(head);
	cout<<ans;
	//your logic function here
	//print_list(head);


	return 0;
}
