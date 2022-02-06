//array logic
#include<iostream>
using namespace std ;

int main(int argc, char *argv[])
{
	//int n=5;
    //scanf("%d",&n);
	int a[10]={1,2,3,4};
	//a[10]=0 0 0 0 0 0 0 0 0 0 g g g g...... 
	//a[10]=1 2 3 4 0 0 0 0 0 0 g g g g...... 
	for(int i=0;i<=10;i++)
	{
	    printf("%d ",a[i]);
	}
	return 0 ;
}