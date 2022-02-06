#include<iostream>
using namespace std;

//5 10
//5 5
int gcd(int a,int b){
	if(a==b){
		return a;
	}
	else if(a>b){
		return gcd(a-b,b);
	}
	else{
		return gcd(a,b-a);
	}
}

int lcm(int a,int b){
	return (a*b)/gcd(a,b);
	//lcm=product_of_num/gcd_of_num
}

int main(){
	int t;
	cin>>t;

	while(t--)
	{
	    int a;
	    int b;
	    cin>>a>>b;
		cout<<lcm(a,b);
		cout<<"\n";
	}
	return 0;
}
