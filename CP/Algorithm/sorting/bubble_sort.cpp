#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

void bubble_sort()
{
	int n;
	cin>>n;


	int a[n];

	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}

	//logic
	//4 6 7 2 3 8
	//4 6 2 3 7 8
	//4 2 3 6 7 8
	//2 3 4 6 7 8
	//2 3 4 6 7 8
	for(int i=0;i<n-1;++i)
	{
		cout<<"pass "<<i+1<<"\n";
		for(int j=0;j<n-i-1;++j)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
			for(int k=0;k<n;++k)
		     {
			   cout<<a[k]<<" ";
		     }
		     cout<<"\n";
		}
		cout<<"\n";
	}
}
// time complexity
//O(n^2) ----> in wrost case & avg case
//O(n)   ----> in best case

int main()
{
	bubble_sort();
	return 0;
}