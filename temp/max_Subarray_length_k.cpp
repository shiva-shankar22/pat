/*
you have given an array A
pick  B  elements from left or right enf of array 
find max sum possible


  let N is length of array
 B is no of elements n array to be picked
  
  then sol:- find max Subarray Sum with size (N-B)

  this can be  converted into  maxSubarray with size 'K'


*/


#include<bits/stdc++.h>
using namespace  std;

int max_SubSum(vector<int> arr,int k){
    int n=arr.size();
    int wSum=arr[0];
    int ans=INT_MIN;

    for(int i=0;i<n;i++)
       wSum+=arr[i];
    
    ans=max(ans,wSum);



    for(int i=1,j=k;i+k<n;i++,j++){
        wSum-=arr[i];
        wSum+=arr[j];
        ans=min(ans,wSum);
    }
        
   return ans;

}

int main(){

    

    return 0;

}