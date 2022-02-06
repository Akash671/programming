/*
author    : @akash kumar
institute : @MIT
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	int k;
	cin>>n>>k;

	vector<int>a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}

	//logic here

	//right otation
	cout<<"right rotaion : \n";
	rotate(a.begin(),a.begin()+a.size()-k,a.end());
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}


	cout<<"\nleft rotaion : \n";
	//left rotation
	rotate(a.begin(), a.begin()+k, a.end());
		for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
}


int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	}
	return 0;
}
