#include<climits>
#include<queue>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){

  priority_queue<int> pq;

  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      int x;
      cin>>x;
      pq.push(-1*x);
  }
     int cost=0;
  while(pq.size()>1){
      int first,second;
      first=pq.top();
      pq.pop();
     
      second=pq.top();pq.pop();
      int lc=(first+second)*-1;
       cost+=lc;
       pq.push(-1*lc);
  }

  cout<<cost<<endl;

    return 0;
}