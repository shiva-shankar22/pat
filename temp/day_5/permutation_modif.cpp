#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
  
  for( auto &it : v)
       cin>>it;
  sort(v.begin(),v.end());

  next_permutation(v.begin(),v.end());

  for(auto &it: v)
     cout<<it<<" ";
       

}