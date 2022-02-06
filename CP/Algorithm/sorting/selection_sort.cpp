#include<iostream>
using namespace std;


void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

void selection_sort()
{
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}


	//arr[] = 64 25 12 22 11

    // Find the minimum element in arr[0...4]
    // and place it at beginning
    //11 25 12 22 64

    // Find the minimum element in arr[1...4]
    // and place it at beginning of arr[1...4]
    //11 12 25 22 64

    // Find the minimum element in arr[2...4]
    // and place it at beginning of arr[2...4]
    //11 12 22 25 64

    // Find the minimum element in arr[3...4]
    // and place it at beginning of arr[3...4]
    //11 12 22 25 64 


    //int min_idx;
    for(int i=0;i<n-1;++i)
    {
    	int min_idx=i;
    	for(int j=i+1;j<n;++j)
    	{
    		if(a[j]<a[min_idx])
    		{
    			min_idx=j;
    		}
    	}
    	swap(&a[i],&a[]);
    }


    //logic here


    for(int i=0;i<n;++i)
    {
    	cout<<a[i]<<" ";
    }
}


//Time Complexity: O(n2)
//Auxiliary Space: O(1) 

int main()
{
	selection_sort();
	return 0;
}