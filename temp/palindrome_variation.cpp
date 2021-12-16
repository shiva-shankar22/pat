#include<iostream>
#include<string>
using namespace std;

string makePalindrome(string str){
    string temp="";
    for(int n=str.length(),i=n-1;i>=0;i--)
       temp+=str[i];
    if(str==temp)return str;
    else 
    return str+temp;
           
}

int main(){

    

    return 0;
}