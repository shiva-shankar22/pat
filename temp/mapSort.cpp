#include <cmath>
#include <cstdio>
#include <vector>
#include<map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    vector<int> ar(n);
  map<int,int>mp;
    //  vector<int> vis(n,0);
    for(auto &it :ar) { 
         cin>>it;
        mp[it]++;
    }
    
    int m;cin>>m;
   sort(mp.begin(),mp.end());
    
    for(auto &it :mp)
         cout<<it.first<<it.second<<endl;
    
    return 0;
}
