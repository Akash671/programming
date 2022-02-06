#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    int closestNumber(int N , int M) {
   
        // code here
        int q=N/M;
        //q=13/4=3
        
	    int n1=q*M;
	    //n1=12
	    int n2;
	    if(N*M>0)
	    //13*4>0
	        n2=(M*(q+1));
	        //n2=4*4=16
	    else
	        n2=(M*(q-1));
	        //n2=4*2=8
	    if(abs(n2-N)>abs(N-n1))
	    //16-13>13-12
    	    return n1;
    	else
    	    return n2;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.closestNumber(N,M) << endl;
    }
    return 0;
}  // } Driver Code Ends
