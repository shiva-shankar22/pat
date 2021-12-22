#include<iostream>
#include<stack>
#include<vector>
#include<map>
using namespace std;

map<int,int> nexGreater(vector<int> &ar){
    int n=ar.size();
    stack<int> st;
    st.push(ar[0]);
    map<int,int> mp;
    for(int i=1;i<n;i++){
        int next=ar[i];
        if(st.empty())st.push(next);

        if(st.top()>=next)st.push(next);
        else{
              while(st.top()<ar[i]){
                  mp[st.top()]=ar[i];
                  st.pop();
              }
              st.push(next);
        }
    }

    while(!st.empty()){
        mp[st.top()]=-1;
        st.pop();
    }

    return mp; 
}


int main(){

    vector<int> v={17,1,8,7,5,6};

    map<int,int> m=nexGreater(v);

    for(auto &it: m)
      cout<<it.first<<" -> "<<it.second<<endl;

}