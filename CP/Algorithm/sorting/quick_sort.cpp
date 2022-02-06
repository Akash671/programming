#include<iostream>
using namespace std;


void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int partition(int a[],int l,int h)
{
	int pivot=a[h];
	int i=l-1;



	for(int j=l;j<h;++j)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[h]);
	return i+1;
}


//wrost case --->O(n^2).
//best case   --> O(nLogn)


void quick_sort(int a[],int l,int h)
{
	//Like Merge Sort, QuickSort is a Divide and Conquer algorithm

	//Always pick first element as pivot.
    //Always pick last element as pivot (implemented below)
    //Pick a random element as pivot.
    //Pick median as pivot.

    //The key process in quickSort is partition().

    if(l<h)
    {
    	int piv=partition(a,l,h);

    	quick_sort(a,l,piv-1);
    	quick_sort(a,piv+1,h);
    }
}


void sort()
{
	int n;
	cin>>n;


	int a[n];
	for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}

		quick_sort(a,0,n-1);



		for(int i=0;i<n;++i)
		{
			cout<<a[i]<<" ";
		}
}

int main()
{
	sort();
	return 0;
}