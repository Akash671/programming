#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second

void solve(){
   int n;
   cin>>n;

   vector<pair<int,int>>a;   
   for(int i=0;i<n;++i){
	   int a1;
	   int a2;
	   cin>>a1>>a2;
	   a.push_back({a1,a2});
   }
   //print vector of the pair
   for(int i=0;i<n;++i){
	   cout<<a[i].F<<" "<<a[i].S<<"\n";
   }
   sort(a.begin(),a.end());
   //after soring
   //
   for(int i=0;i<n;++i){
	   cout<<a[i].F<<" "<<a[i].S<<"\n";
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
