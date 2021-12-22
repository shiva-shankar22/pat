#include<bits/stdc++.h>
using namespace std;

bool isValid(int x,int y,int n){
    if(x>=n || y>=n)return false;
    
    if(x<0 ||y<0)return false;
    
    return true;
}


int minNoSteps(int x,int y,int tx,int ty,int n,vector<int> &dx, vector<int> &dy ,vector<vector<int>> &dp){
    
    if(x==tx && y==ty)return 0;
    
    if(x>=n || y >=n || y<0 ||x<0)return INT_MAX;
    
    if(dp[x][y]!=-1) return dp[x][y];

       int ans=INT_MAX;
     for(int i=0;i<7;i++){
         
       if(isValid(x+dx[i],y+dy[i],n))
         ans=min(ans,minNoSteps(x+dx[i],y+dy[i],tx,ty,n,dx,dy,dp)+1);
         
     }
    
       return dp[x][y]=ans;
    
}

int main() {
    /*
       6
4 5
1 1
    */
    int n=6;
  
    int xi,yi,xf,yf;

    xi=4,yi=5,xf=1,yf=1;
    
    vector<int> dx={2,-2,-1,-2,1,1,-1};
    vector<int> dy={-1,-1,2,1,2,-2,2};
    vector<vector<int>> dp(n,vector<int> (n,-1));
    cout<<minNoSteps(xi-1,yi-1,xf-1,yf-1,n-1,dx,dy,dp)<<endl;
           
    return 0;
}
