#include<bits/stdc++.h>
using namespace std;

void solve(){
  
   vector<int>a(5);

   for(int i=0;i<5;++i){
   	cin>>a[i];
   }

   cout<<a.front()<<" "<<a.back()<<"\n";

   
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
