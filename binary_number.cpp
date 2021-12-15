#include<bits/stdc++.h>
#include<iostream>

using namespace std;


void findBinary(int n){
      string str="";
    while(n){
         
         str+= to_string(n%2);
         n=n>>1;
    }

      reverse(str.begin(),str.end());
      cout<<str;
}

int main(){


   cout<<endl;
    findBinary(48);
   
   cout<<endl;

}