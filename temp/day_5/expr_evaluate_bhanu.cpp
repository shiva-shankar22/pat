#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
   
   string str;
   cin>>str;

  vector<char> sym;
  vector<string> nums;
    
    string temp="";
    
   for(int i=0,n=str.length();i<n;i++){
       if(str[i]>='0' && str[i]<='9'){
           temp+=str[i];
       }
       else{
           nums.push_back(temp);
           temp="";
           sym.push_back(str[i]);
       }
   }


   

    return 0;
}