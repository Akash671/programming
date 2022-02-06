#include<iostream>
using namespace std;

void solve(){
	int *p;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}

	//logic here

	p=a;
	for(int i=0;i<n;++i){
		cout<<*p<<" ";
		p++;
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
