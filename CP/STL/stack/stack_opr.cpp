#include<bits/stdc++.h>
using namespace std;

void solve(){
    stack<int>s;

    s.push(0);
    s.push(1);
    s.push(2);
    s.push(3);

   /* while(!s.empty()){
    	cout<<s.top()<<"\n";
    	s.pop();
    }
    */

    cout<<s.size()<<"\n";
    int n=s.size();
    sort(s,s+n);
    
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
