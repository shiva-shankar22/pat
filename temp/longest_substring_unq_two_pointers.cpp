#include<map>
#include<iostream>
#include<string>
#include<climits>
#define map map<int,int> mp
#define foreach(x) for (auto &it : x)
using namespace std;

int main(){

  string str;
  map;

  cin>>str;

  int ans=INT_MIN;
  for(int i=0,h=0,n=str.length();h<n;h++){
      mp[str[h]]++;
      if(mp[str[h]]>1){
         ans=max(ans,h-i);
         i++;
      }

  }
  cout<<ans<<endl;

  


    return 0;
}