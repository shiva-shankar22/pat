#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    
    char str[10000];

    cin.getline(str,10000);
    
    vector<string> ans;
    string temp="";
    for(int i=0;str[i]!='\0';i++){
         if(str[i]==' ' ){
             ans.push_back(temp);
             temp="";
         }
         else 
            temp+=str[i];
    }
      
      ans.push_back(temp);

    reverse(ans.begin(),ans.end());

    for(auto &it :ans)
       cout<<it <<"  ";

    return 0;
}