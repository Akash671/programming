#include<iostream>
using namespace std;

/*
int main(int argc,char** argv)
{
	cout<<"size : "<<argc<<"\n";
	for(int i=0;i<argc;++i)
	{
		cout<<argv[i]<<"\n";
	}
	return 0;
}
*/

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;++i)
		{
			cout<<a[i]<<" ";
		}
	}
}