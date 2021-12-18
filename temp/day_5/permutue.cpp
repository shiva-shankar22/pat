#include<iostream>
#include<string>
using namespace std;

string permute(string str,int l,int r,int n){
    
    string  ans="";
    if(l==r){ 
        return str;
    }
    
    else
    for(int i=l;i<=r;i++){
        swap(str[i],str[l]);
      ans+=("  "+  permute(str,l+1,r,n));
        swap(str[i],str[l]);
        
     }
    return ans;
}

int main(){
   
   string str;
 //  cin>>str;
// int n=str.length()-1;
     int ar[]={1,2,3};
     str="ABCD";
   cout<< permute(str,0,2,3)<<endl;
   
  
   return 0;
}