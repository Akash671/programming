// CPP program for the above approach
 //time=O(N^2)
#include <iostream>
using namespace std;


void printSubstrings(string str)
{
 
    // First loop for starting index

    for (int i = 0; i < str.length(); i++) {

        string subStr;

        // Second loop is generating sub-string

        for (int j = i; j < str.length(); j++) {

            subStr += str[j];

            cout << subStr << endl;

        }

    }
}
 
// Driver Code
 

int main()
{
    string str = "abcd";
    printSubstrings(str);
    return 0;
    //    this code is contributed by defcdr
}