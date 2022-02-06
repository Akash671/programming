#include<bits/stdc++.h>
using namespace std;


template <typename T1>
 T1 myMax(T1 x,T1 y)
 {
 	return (x>y) ? x:y;
 }

template<typename T2>
T2 myMin(T2 x, T2 y)
{
	return (x<y) ? x:y;
}
//cout<<myMax<int>(2,4)<<"\n";
//cout<<myMin<int>(4,5)<<"\n";

int main()
{
    cout<<myMax<char>('A','B')<<"\n";
    cout<<myMin<int>(4,5)<<"\n";
	return 0;
}
