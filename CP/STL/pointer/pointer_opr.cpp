#include<iostream>
using namespace std;

void solve(){

   int a=10;
   int b=20;
   int *ptr1=&a;
   int *ptr2=&b;

   //logic
   //int *ptr;

   int ans;
   ans=(*ptr1)+(*ptr2);
   //cout<<ans;
   int *ptr=&ans;

   cout<<ans;
   
}

int main(){
	int t;
	cin>>t;

	while(t--){
		solve();
		cout<<"\n";
	}

	//loop running infinite time	
	//main();
	return 0;
}
