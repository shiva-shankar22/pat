#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    int n=6;
    //cin>>n;
    
    vector<int> ar={2,2,1,3,3,3};
    vector<int> vis(n,0); map<int,int> mp;
    for(auto &it :ar) {
         
         mp[it]++;
} 
    int m=3;//cin>>m;
    
   while (m--){
         for(auto &it :mp){
             if(it.second>1){
                 it.second-=1;
                 break;
             }
         } 
    }
   
   int ans=0;

   for(auto &it :mp){
       if(it.second==1)ans++;
   }
    
    cout<<endl<<ans<<endl;

    return 0;
}
