#include<iostream>
using namespace std;

int distinctsWays(int i,int j,int n,int m){
    if(i==n-1 && j==m-1)return 1;

    if(i>=n ||j>=m)return 0;

    return distinctsWays(i+1,j,n,m)+distinctsWays(i,j+1,n,m);
}

int main(){

    cout<<distinctsWays(0,0,3,3)<<endl;
}