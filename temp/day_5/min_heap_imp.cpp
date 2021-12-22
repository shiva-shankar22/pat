#include<queue>
#include<iostream>
using namespace std;


int main(){

   priority_queue<int,vector<int>,greater<int>> pq; 

   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int x; cin>>x;
      pq.push(x);
   }
     int sum=0;
   while(pq.size()>1){
       int lc=0,lc2;
       sum+= lc=pq.top();
       pq.pop();
       sum+=lc2=pq.top();
       pq.pop();
       pq.push(lc+lc2);
   }
  cout<<sum<<endl;
    return 0;
}