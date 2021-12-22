#include<math.h>
#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0)return a;

   return gcd(b,b%a);
}

int main(){
    int a,b;
  //  cin>>a>>b;

    int x=gcd(50,60);
    cout<<x<<endl;
    int ans=0;
    for(int i=1,n=sqrt(x);i<=n;i++)
          if(x%i==0){
           ans++;//                                        /
           int temp=x/i;
           // we are counting factors after sqrt(num) 
           if(temp!=i)ans++;
          }
   //cout<<ans<<endl;
}