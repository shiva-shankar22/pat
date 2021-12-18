#include<iostream>
#include<vector>
#include<map>
#include<climits>
#include<unordered_map>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);

    for(auto &it :arr)
        cin>>it;
    unordered_map<int,int> mp;
    int sum=0;
     int ans=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum==k)
         ans=max(ans,i+1);
        
        if(mp.find(sum)==mp.end())
            mp[sum]=i;
        
        if(mp.find(sum-k)!=mp.end()){
            
            if(ans<(i-mp[sum-k]))
                ans=(i-mp[sum-k]);

        }
    }
    
  cout<<ans<<endl;

    return 0;
}