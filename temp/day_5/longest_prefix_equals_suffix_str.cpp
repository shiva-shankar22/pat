#include<string>
#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int main(){

   string str;
   cin>>str;

     string pfx="",sfx="";
      int ans=INT_MIN;
       
     for(int i=0,n=str.length(),j=n-1;i<j;i++,j--){
        pfx+=str[i];
        sfx=str[j]+sfx;

        //cout<<"prefix  "<<pfx<<endl;
      //  cout<<"suffix   "<<sfx<<endl;
        if(sfx==pfx)
           ans=max(ans,i+1);

     }

     cout<<ans<<endl;

    return 0;
}