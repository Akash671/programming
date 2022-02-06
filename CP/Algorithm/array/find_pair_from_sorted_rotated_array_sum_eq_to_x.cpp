/*
author    : @akash kumar
institute : @MIT
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,x;
	cin>>n>>x;

	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}

	//logic
	int i;
	for(i=0;i<n-1;++i){
		if(a[i]>a[i+1]){
			break;
		}
	}

	int l=(i+1)%n;
	int r=i;


	int f=1;
	while(l!=r){
		if(a[l]+a[r]==x){
			cout<<"yes"<<"\n";
			cout<<a[l]<<" "<<a[r];
			f=0;
			break;
		}
		if(a[l]+a[r]<x){
			l=(l+1)%n;
		}
		else{
			r=(r+n-1)%n;
		}
	}
	if(f){
		cout<<"no";
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
