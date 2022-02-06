#include<bits/stdc++.h>
using namespace std;


void solve(){
	vector<vector<int>>a={{1,2,3},{2,3,4},{4,5,6}};


	for(int i=0;i<3;++i){
		for(auto it=a[i].begin();it!=a[i].end();it++){
			cout<<*it<<" ";
		}
		cout<<"\n";
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
