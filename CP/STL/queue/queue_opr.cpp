#include<bits/stdc++.h>
using namespace std;

void solve(){
   queue<int>q;

   q.push(10);
   q.push(10);
   q.push(20);
   q.push(30);

   while(!q.empty()){
   	cout<<q.front()<<" ";
   	q.pop();
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
