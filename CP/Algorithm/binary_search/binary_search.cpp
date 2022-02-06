#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}

	//logic here
	sort(a,a+n);
	cout<<binary_search(a, a+n, 2)<<"\n";
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
