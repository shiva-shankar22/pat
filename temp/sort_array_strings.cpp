#include<string>
#include<algorithm>
#include<math.h>
#include<iostream>
using namespace std;

bool comp(string str,string str2){
    
    return (str.length()<str2.length());
}


int main(){

   int n;
   cin>>n;

    vector<string> strs(n);
 
   for(auto &it :strs)
      cin>>it;


   sort(strs.begin(),strs.end(),comp);

   for(auto &it: strs)
       cout<<it<<" ";

       return 0;

}
