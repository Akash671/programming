#include<iostream>
using namespace std ;

int main()
{
	int *a;
	int *b;
	int x=10;
	int y=20;
	
	
	a=&x;
	b=&y;
	
	
	*a=*a+*b;
	
	*b=*a-*b;
	*a=*a-*b;
	
	cout<<*a<<" "<<*b;
	return 0 ;
}