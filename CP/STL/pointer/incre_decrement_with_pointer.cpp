#include<iostream>
using namespace std;


void solve(){
	int n=10;

	int *p1;
	int *p2;

	p1=&n;
	p2=&n;

	printf("%d\n",p2);
	p2=p2+3;
	printf("%d",p2);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
