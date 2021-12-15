#include<iostream>
#include<vector>
using namespace  std;


int main(){

  int n,m;
  cin>>n>>m;

  vector<vector<int>> mat(n,vector<int> (m));


  for(auto &it: mat)
     for(auto &i:it)
          cin>>i;

   int sum=0,lsum=0;
   for(int i=0;i<n;i++){
       
       for(int j=0;j<m;j++){ 
         if(i<j)
          lsum+=mat[i][j];
        sum+=mat[i][j];
       }         
 
   }

    cout<<" l sum is "<<lsum<<endl<<" remain sum is " <<sum-lsum<<endl<<" total is "<<sum<<endl;
}