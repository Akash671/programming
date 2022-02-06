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

	//for reverse 
	reverse(a.begin(),a.end());


	//vector max element
	int m=*max_element(a.begin(),a.end());

	int mn=*min_element(a.begin(),a.end());

	//sum of all vector element
	int ans=accumulate(a.begin(),a.end(),0);
	cout<<ans<<endl;
	cout << count(a.begin(), a.end(), 20)<<endl;

	//logic here
	int search_element=10;
	cout<<find(a.begin(), a.end(),search_element)<<"\n";

	//
		
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

