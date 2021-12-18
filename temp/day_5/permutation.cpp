#include<iostream>
#include<string>
using namespace std;

void permute(string str,int l,int r){
     if(l==r){
         cout<<str<<endl;
         return ;
     }

     for(int i=l;i<=r;i++){
         swap(str[i],str[l]);
         permute(str,i+1,r);
         swap(str[i],str[l]);
     }

}

int main(){

   string str="SSVP";
//   cin>>str;

   int n=str.length();

 permute(str,0,n-1);

    return 0;
}