/*
author    : @akash kumar
institute : @MIT
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    // initialize container
    map<int, int> mp;
 
    // insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 60 });
    mp.insert({ 5, 50 });

    for(auto &i:mp){
    	cout<<i.first<<" "<<i.second<<"\n";
    }

   //opr
   //1 map_name.erase(key)
   mp.erase(1); //delete key 1
   mp.erase(5);
   cout<<"\n";
   for(auto &i:mp){
       	cout<<i.first<<" "<<i.second<<"\n";
       }

   //erase from iteraotr
   //map_name.erase(iterator position)
    //mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
   // mp.insert({ 3, 60 });
    mp.insert({ 5, 50 });

    //auto it = mp.find(9);
    auto it = mp.find(3);
    mp.erase(it);

    cout<<"\n";
    for(auto &i:mp){
           	cout<<i.first<<" "<<i.second<<"\n";
           }
    //map_name.erase(iterator position1, iterator position2)
    auto it1 = mp.find(2);
    auto it2 = mp.find(5);
    mp.erase(it1, it2);

    cout<<"\n";
        for(auto &i:mp){
               	cout<<i.first<<" "<<i.second<<"\n";
               }
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
