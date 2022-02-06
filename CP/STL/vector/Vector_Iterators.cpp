#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<int>a={1,2,3,4};

    vector<int>::iterator itr;

    //initilize
    itr=a.begin();

    cout<<*itr<<"\n";

    itr=a.begin()+2;

    cout<<*itr<<"\n";

    //last elements
    itr=a.end()-1;

    cout<<*itr;
    
    
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
