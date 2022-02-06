// CPP program to illustrate pair STL
#include <iostream>
#include <utility>
using namespace std;

int main()
{
	pair<int, char>p;
	int n;
	cin>>n;

	for(int i=0;i<n;++i)
	{
		p.first=i;
		p.second='A';
	}

	for(int i=0;i<n;++i)
	{
	   cout<<p.first<<" ";
	}
	
	
	return 0;
}
