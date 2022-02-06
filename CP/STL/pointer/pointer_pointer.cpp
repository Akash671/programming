#include<iostream>
using namespace std;


void solve(){
	int var;
	int *ptr;
	int **pptr;
	int ***ppptr;

	var=1000;

	ptr=&var;
	pptr=&ptr;
	ppptr=&pptr;

	cout<<*ptr<<" "<<**pptr<<" "<<***ppptr;
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
