#include<iostream>
#include<algorithm>
using namespace std;


// In-place rotates s towards left by d
void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}
 
// In-place rotates s towards right by d
void rightrotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
}

void solve()
{
	string s;
	cin>>s;

	/*
    bool val
        = next_permutation(s.begin(),
                           s.end());
    if (val == false)
        cout << "No Word Possible"
             << endl;
    else
        cout << s << endl;
     */

	string tmp=s;
	string tmp2=s,ss=s;

	//leftrotate(s,1);
	//cout<<s<<"\n";
	//leftrotate(s,1);
	//cout<<tmp;
	//cout<<s<<"\n";
	//cout<<ss<<"\n";


	int n=s.size();
	for(int i=0;i<n;++i)
	{
		//leftrotate(ss,1);
		rightrotate(ss,1);
		if(tmp2>=ss)
		{
			tmp2=ss;
		}
	}
	cout<<tmp2<<endl;


	for(int i=0;i<n;++i)
	{
		leftrotate(s,1);
		if(tmp<s)
		{
			tmp=s;
		}
	}
	cout<<tmp;
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		solve();
		cout<<"\n";
	}
	return 0;
}
