#include<iostream>
#include<map>
using namespace std;

bool isUnique(int num){
    map<int,int>mp;
    while(num){
        mp[num%10]++;
        num/=10;
    }
    for(auto &it :mp)
      if(it.second!=1)return false;
 
 return true;
}

int main(){
    int num;
    cin>>num;

  for(int i=1;i<=num;i++)
     if(isUnique(i))
        cout<<i<<"  ";

}