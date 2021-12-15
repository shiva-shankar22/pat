#include<iostream>
#include<string>
using namespace std;


int main(){
    string str;
     cin>>str;
     cout<<str<<endl;
     int cnt=0;
    for(int i=0,n=str.length();i<n;i++){
       
        if(str[i]=='x')cnt++;

        else{
            int j,t;
            for(j=i,t=cnt;cnt;j++){
                if(str[j]=='y'){ cnt--;}
                else{

                cout<<endl<<"invalid"<<endl;return 0;
                }

            }
            if(cnt){

                cout<<endl<<"invalid"<<endl;return 0;
            }
            i=j;
        }
    }
    if(!cnt)
      cout<<"valid"<<endl; 


}
