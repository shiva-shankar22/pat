#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



bool comp(int x,int y){
     
     int x_d=0,y_d=0,xt=x,yt=y;

     while(x>0){
         x/=10;
         x_d++;
     }

     while(y>0){
         y/=10;
         y_d++;
     }

     
      return x_d>y_d;
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

   for(auto &it :arr)
         cin>>it;

  sort(arr.begin(),arr.end(),comp);

  for(auto &it :arr)
      cout<<it<<" ";
    cout<<endl;

}