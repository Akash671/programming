/*
author : @akash kumar
problem:
Function to check if a singly linked list is palindrome

*/


#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;
};


//your logic here
//METHOD 1 (Use a Stack)

////time=O(n);
bool isPalindrome_using_stack(node* head){
    stack<int>s;
    node* slow=head;


    while(slow!=NULL){
        s.push(slow->data);
        //cout<<slow->data<<" ";
        slow=slow->next;
        //cout<<slow->data<<" ";
    }


    //cout<<"\n";

    while(head!=NULL){
        int i=s.top();
        s.pop();
        //cout<<i<<" "<<head->data<<"\n";
        if(i!=head->data){
            return false;
        }
        head=head->next;
    }

    return true;
}


//method 2 by recursive 

//time O(n)
//space O(1) 
bool isPalindrome_recursion(node** left,node* right){
    if(right==NULL){
        return true;
    }
        bool isp=isPalindrome_recursion(left,right->next);
        if(isp==false)
        {
            return false;
        }
        bool isp1=(right->data==(*left)->data);
        *left=(*left)->next;
        return isp1;
}


bool isPalindrome(node* head){
    isPalindrome_recursion(&head,head);
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
	create_list(&head,2);
    create_list(&head,1);
	
	print_list(head);
    cout<<"\n";     

    if(isPalindrome_using_stack(head)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
	//your logic function here
	///print_list(head);

    cout<<"\n";
    if(isPalindrome(head)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }


	return 0;
}
