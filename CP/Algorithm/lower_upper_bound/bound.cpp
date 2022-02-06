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
	// Sort the array to make sure that lower_bound()
	// and upper_bound() work.
	sort(a.begin(), a.end());

	auto q=lower_bound(a.begin(),a.end(),20);
	auto p=upper_bound(a.begin(),a.end(),20);

	cout<<q-a.begin()<<" "<<p-a.begin()<<endl;
	 
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
