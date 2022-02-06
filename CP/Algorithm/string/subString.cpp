#include<bits/stdc++.h>
using namespace std;


void subString()
{
	string s;
	cin>>s;

	int n=s.size();

	for(int i=0;i<n;++i)
	{
		for(int j=1;j<=n-i;++j)
		{
			cout<<s.substr(i,j)<<"\n";
		}
	}
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		subString();
		cout<<"\n";
	}
	return 0;
}
