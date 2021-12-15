#include<iostream>
#include<vector>
using namespace std;

/*
 
 main theme  is to swap the ar[i][j] with ar[j][i] when i<j 

*/


int main(){

  int n,m;cin>>n>>m;
   vector<vector<int>> mat(n,vector<int> (m));

   for(auto &it : mat)
      for(auto &i :it)
         cin>>i;

    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
        if(i<j)
           swap(mat[i][j],mat[j][i]);

    for(auto &it :mat){
        for(auto &i : it)
           cout<<i<<" ";

           cout<<endl;
    }    
   

    return 0;
}