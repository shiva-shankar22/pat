#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

bool comp(string s,string s2){
    int n=s.length();
    int m=s2.length();
    bool f=false; int i,j;
    for( i=n-1,j=m-1;i>=0&&j>=0;j--,i--){
        if(s[i]==s2[j])continue;
        else{
            if (s[i]<s2[j]){ 
                f=true;
                
            }
             break;
        }
    }
    
    if(f && m>n )f=true;
    else f=false;    
    
    return f;
}

int main() {
   
        
        vector<string> arr={"phnsuf" ,"aqh", "pcmrmzyze", "l" ,"lextl", "leudxlich" ,"r" ,"ch"};
        
        sort(arr.begin(),arr.end(),comp);
        
        for(auto &it: arr)
              cout<<it<<" ";
        cout<<endl;
    
    return 0;
}
