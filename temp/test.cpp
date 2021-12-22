#include<iostream>
#include<string>


using namespace std;


int main(){
    
    int n=123456;
  //  cin>>n;
    string str=to_string(n);
    string temp="";
    for(int i=0,n=str.length();i<n;i++)
        if(i%2!=0)
          temp+=str[i];

    return 0;
}