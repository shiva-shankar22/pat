#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
     
     string str,str2;
     cin>>str>>str2;

       if(str==str2){cout<<"true"<<endl; return 0;}
       
     for(int i=0,n=str.length();i<n;i++){
         
         char ch=str[0];

         str.erase(0,1);
     
         cout<<"after deleting "<<str<<endl;
         
         str.push_back(ch);

         cout<<"after modify "<<str<<endl;
         

         if(str==str2){
             cout<<endl<<"true"<<endl;
             return 0;
         }
            
     }

     cout<<endl<<" false ";

    return 0;
}