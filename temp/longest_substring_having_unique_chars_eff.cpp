#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n=s.length(),mx=0;
    for(int i=0;i<n;i++){
        int end=min(n-1,i+25),freq[26]={0};
        for(int j=i;j<=end;j++){
            int c=s[j]-'A';
            if(freq[c]>0)
            break;
            freq[c]++;
            mx=max(mx,j-i+1);
        }
    }
    cout<<mx;
}