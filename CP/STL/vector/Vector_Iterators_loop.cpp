#include<bits/stdc++.h>
using namespace std;

void solve(){
   vector<int>a={1,2,3,4,5};

   vector<int>::iterator i;
   for(i=a.begin();i!=a.end();++i){
   	cout<<*i<<" ";
   }

   for(auto ii:a){
   	cout<<ii<<" ";
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
