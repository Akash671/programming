/*
author    : @akash kumar
institute : @MIT
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;

	vector<pair<int,int>>a;
	for(int i=0;i<n;++i){
		int p;
		int q;
		cin>>p>>q;
		a.push_back({p,q});
	}

	//print
	cout<<"\n";
	for(auto &i:a){
		cout<<i.first<<" "<<i.second<<"\n";
	}

	//opr
	cout<<"\n";

	sort(a.begin(),a.end());
	for(auto &i:a){
		cout<<i.first<<" "<<i.second<<"\n";
	}

	//logic
	// auto it=find(a.begin(),a.end(),{1,2});
	
	

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
