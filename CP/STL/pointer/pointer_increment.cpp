#include<iostream>
using namespace std;


void solve(){
	int *p;
	int a=10;
	p=&a;

	cout<<*p<<"\n";

	//increment in pointer in c++

	//*p--
    *p=*p+40;
	cout<<*p;
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
