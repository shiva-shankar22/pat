#include<map>
#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>

using namespace std;

bool isIsomorphic(string str,string str2){
    int n=str.length(),m=str2.length();
    if(n!=m)return false;
    unordered_map<char,int> mp1,mp2;
    
    for(int i=0;i<n;i++){
        mp1[str[i]]++;
        mp2[str2[i]]++;
    }

    for(int i=0;i<n;i++){
        if(mp1[str[i]]!=mp2[str2[i]])
            return false;
    }

  return true;
}

int maxIsomorphicStrings(vector<string> &str){
    int ans=-1;

    for(int i=0,n=str.size();i<n;i++){
        for(int j=i+1;j<n;j++)
           if(isIsomorphic(str[i],str[j])){ 
                if(ans<str[i].length())
                   ans=str[i].length();
           }
    }

  return ans;
     
}


int main(){
   
  int n;
  cin>>n;
  vector<string> str(n);
  
  for(auto &it :str)
       cin>>it;

   cout<<endl<<isIsomorphic(str[0],str[1])<<endl;
  //cout<<endl<<maxIsomorphicStrings(str)<<endl;

  map<int,int> mp;

  

    return 0;
}