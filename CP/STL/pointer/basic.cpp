#include<iostream>
using namespace std;

void solve(){
   int *ptr;
   int a=10;
   
   ptr=&a;
   //a  =10
   //ptr=f3
   //
   *ptr=20;
   printf("%d",*ptr);
   printf(" %d",a);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}
