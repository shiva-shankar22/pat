#include<iostream>
#include<map>
#include<string>
#include<climits>
using namespace std;


bool isUnique(string str){
    int n=str.length();

    map<int,int> mp;
    for(int i=0;i<n;i++){ 
        mp[str[i]]++;
        if(mp[str[i]]>1)return false;
    }
    
  return true;
}


int length_substr(string str){
     int n=str.length();
    int ans=INT_MIN;

    for(int i=0;i<n;i++){
           string temp= str.substr(n-i);
           if(isUnique(temp)){
               ans=max(ans,i);
           }
    }
   
   return ans+1;

}


int main(){
     
     cout<<endl<<length_substr("abdefgabef")<<endl;
}