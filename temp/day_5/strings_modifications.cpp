#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){
    string str;

    cin>>str;

   // sort(str.begin(),str.end());
  
   int h=str.length()-1;
   int i=0;

   while(i<=h){
       while(str[i]>='A' && str[i]<='Z' )i++;
       while(str[h]>='a' && str[i]<='z') h--;
       
       if(i<=h){
           swap(str[i],str[h]);
           h--;
           i++;
       }

   }


    cout<<str;

    return 0;
}