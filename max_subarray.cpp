#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(auto &it : arr)
       cin>>it;
       

    int k; cin>>k;
 set<int> st;

  for(int i=0;i<k;i++)
     st.insert(arr[i]);
  
 //  cout<<*st.end()<<endl;

   for(int i=k-1,j=i+1;j<n;i++,j++){
       cout<<*st.end()<<endl;
       st.erase(0);
       cout<<endl<<"set"<<endl;
       for(auto &it :st)
          cout<<endl<<it<<" ";
          cout<<endl;
       st.emplace(arr[i]);
       
   }
    
    return 0;
}