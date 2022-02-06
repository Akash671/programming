#include<iostream>
using namespace std;


void insertion_sort()
{
	int n;
	cin>>n;


	int a[n];

	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}


	//logic here

	//4 5 3 4 2
	//3 4 5 4 2
	//3 4 4 5 2
	//2 3 4 4 5	

	for(int i=1;i<n;++i)
	{
		int key=a[i];
		int j=i-1;

		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		//cout<<"\n";
		a[j+1]=key;
	}

	for(int i=0;i<n;++i)
	{
		cout<<a[i]<<" ";
	}
}


//Time Complexity: O(n^2) 
//Auxiliary Space: O(1)



int main()
{
	insertion_sort();
	return 0;
}