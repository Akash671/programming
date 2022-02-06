#include<bits/stdc++.h>
using namespace std;

void solve(){
    pair<int,int>a=make_pair(10,20);
    pair<int,int>b=make_pair(20,20);

 
    cout<<(a==b)<<"\n";
    cout<<(a<b)<<"\n";
    cout<<(a>b)<<"\n";
    cout<<(a<=b)<<"\n";
    cout<<(a>=b)<<"\n";

    //
    cout<<a.first<<" "<<a.second<<"\n";
    cout<<b.first<<" "<<b.second<<"\n";
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
