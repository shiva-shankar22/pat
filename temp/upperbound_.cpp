#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v={1,2,3,4,5,7,9};
    

    cout<<endl<<*upper_bound(v.begin(),v.end(),99)<<endl;

    return 0;
}