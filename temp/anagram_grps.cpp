#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool isAnagram(string str,string str2){
      int n=str.length(),m=str2.length();
      if(n!=m)return false;
     sort(str.begin(),str.end());
     sort(str2.begin(),str2.end());
     for(int i=0;i<n;i++)
        if(str[i]!=str2[i])
           return false;

  return true;
}


void grpAnagrams(vector<string> strs){
    int n=strs.size();
    vector<int> vis(n,0);
  vector<vector<string>> ans(n);
    for(int i=0;i<n;i++){
        if(vis[i])continue;
        vis[i]=1;
          ans[i].push_back(strs[i]);
        for(int j=i+1;j<n;j++){
            if(isAnagram(strs[i],strs[j])){ 
               vis[j]=1;
               ans[i].push_back(strs[j]);
            }
        }
    }

    for(auto &it : ans){
        if(it.size()==1)continue;

        for(auto &i :it)
           cout<<i<<" ";

       cout<<endl;   

    }
}

int main(){
  
    int n; 
       cin>>n;
    vector<string> str(n);
 
    for(auto &it :str)
         cin>>it;
    
    grpAnagrams(str);


    return 0;
}