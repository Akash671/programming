#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>>n;

	vector<int>a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}

	//logic here
	sort(a.begin(),a.end());
	
	auto p=lower_bound(a.begin(),a.end(),10);
	auto q=upper_bound(a.begin(),a.end(),10);

	cout<<p-a.begin()<<" "<<q-a.begin()<<"\n";

	
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
