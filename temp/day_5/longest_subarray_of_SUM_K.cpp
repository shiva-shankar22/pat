#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main(){
      
      int n,k;
      cin>>n>>k;
      vector<int> ar(n);
      
      for(auto &it:ar)
           cin>>it;
       
      int ans=INT_MIN;
      for(int i=0;i<n;i++){
          for(int j=i;j<n;j++){
              int sum=ar[i];
               for(int k=i+1;k<n;k++)sum+=ar[k];
               if(sum==k)
                   ans=max(ans,j-i+1);
          }
      }

      cout<<ans<<endl;


    return 0;
}