#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string str="ssvp";
   // cin>>str;

   vector<int> vis(str.length(),0);
   
   for(int i=0,n=str.length();i<n;i++){
    
      if(vis[i])continue;
       for(int j=i+1;j<n;j++){
           if(str[i]==str[j])
             vis[j]=1;
       }
       cout<<str[i]<<" ";
   }

   


}