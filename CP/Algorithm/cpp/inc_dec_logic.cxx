//increment and decrement logic

#include<iostream>
using namespace std ;


int main()
{
    //int a[4]={1,2,3};
    //for(int i=0;i<5;i++){
    //    cout<<a[i];
  //}  
    
    int i=0, j=0;
    int k;
    k=j++;//j=0
    //j=1
    //k=++i;//i=1
    //i=1
    k=++j+i++;//j=2,i=0, k=2
    //i=1,j=2, k=2
    cout<<i<<j<<k;
    return 0;
}