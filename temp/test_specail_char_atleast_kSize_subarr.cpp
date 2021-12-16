#include<bits/stdc++.h>

using namespace std;

int main(){
    string str="abacaba";
   
    int n=str.length();int ans=INT_MAX;
     for(char c='a';c<'z';c++){

        int lcmax=INT_MIN;
         vector<int> arr(n,0);

         for(int i=0;i<n;i++){
             if(str[i]==c)
                 arr[i]=1;
         }

        int j=0;
        int cnt=0;
        for(int i=0;i<n;i++){
           if(arr[i]==1){
            
            lcmax=max(lcmax,i-j);
            j=i;   
           }
        }

        lcmax=max(n-j,lcmax);
        ans=min(ans,lcmax);
     }

     cout<<ans<<endl;
}