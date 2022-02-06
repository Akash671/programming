#include<bits/stdc++.h>
using namespace std;

void solve(){
	vector<pair<int,int>>v;

	int n=4;
	for(int i=0;i<n;++i){
		int a,b;
		cin>>a>>b;
		v.push_back({a,b});
	}

	for(int i=0;i<n;++i){
		cout<<v[i].first<<" "<<v[i].second<<"\n";
	}

	//operation can be perform on vector pair
	cout<<"-------------------------------------"<<"\n";
	sort(v.begin(),v.end());
	for(int i=0;i<n;++i){
		cout<<v[i].first<<" "<<v[i].second<<"\n";
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
