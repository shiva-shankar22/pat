#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str="google";
    //cin>>str;
    string temp="";
    int n=str.length();
    vector<int> vis(26,0),vis2(26,0);
    
    for(int i=0;i<n;i++){
        if(vis[str[i]-'A']||vis2[str[i]-'a'])continue;
        else{
            vis[str[i]-'A']=1;vis2[str[i]-'a'];
            temp+=str[i];
        }
    }
    reverse(temp.begin(),temp.end());

    cout<<temp<<endl;

    
}