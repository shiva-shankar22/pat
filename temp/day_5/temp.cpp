#include<string>
#include<iostream>
using namespace std;

int main(){

   string str="abcd";

   string temp=str+'s';
   string tt='s'+str;

   cout<<temp<<endl<<tt<<endl;

    return 0;
}