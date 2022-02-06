#include<iostream>
using namespace std;

int fun(int b){
	b+=10;
	return b;
	
}

int add(int *a){
	*a=*a+10;
	return *a;
}


void solve(){
   	int a=10;
   	//pass by referance
   	cout<<add(&a)<<"\n";
   	cout<<a<<"\n";

   	//pass by value
   	int b=-10;
   	cout<<fun(b)<<"\n";
   	cout<<b;
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
