
#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;
	int flag;
};


//method 1 using hash map----------
//T(n)=O(n)
//s(n)=O(n)
bool detect_loop_using_hash(node* head){
	unordered_set<node*>s;

	while(head!=NULL){

		//search node in hash
		if(s.find(head)!=s.end()){
			return true;
		}
		s.insert(head);
		head=head->next;
	}
	return false;
}

//method 2 using flag...............

//T(n)=O(n)
//S(n)=O(1)	
bool detect_loop_with_flag(node* head){
	while(head!=NULL){
		if(head->flag==1){
			return true;
		}
		head->flag=1;
		head=head->next;
	}
	return false;
}


//method 3 or Floyd’s Cycle-Finding Algorithm 
//fast method

//time (n)
//space O(1)

bool Floyd_Cycle_finding_Algorithm(node* head){
	node *slow_p = head, *fast_p = head;
 
    while (slow_p && fast_p && fast_p->next) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p) {
            return 1;
        }
    }
    return 0;
}



void create_list(node** head,int d){
	node* new_node=new node();

	new_node->data=d;
	new_node->flag=0;
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

	//create loop in list------------
	head->next->next->next->next=head;
	cout<<"loop is : ";
	//print_list(head);

	//cout<<"\nafter reverse : ";
	//reverse_list(&head);
	//reverse_using_stack(&head);
	// 
	int ans;

	//method 1.........
	int ans1=detect_loop_using_hash(head);

	if(ans1){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}

	//method 2.................
	ans=detect_loop_with_flag(head);


	if(ans){
		cout<<" yes";
	}
	else{
		cout<<" no";
	}


	//method 3 floyd algorithm
	if(Floyd_Cycle_finding_Algorithm(head)){
		cout<<" yes";
	}
	else{
		cout<<" no";
	}

	return 0;
}
