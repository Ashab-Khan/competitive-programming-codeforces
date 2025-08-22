//41A - Translation

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    string t;
    cin>>s>>t;
    reverse(t.begin(),t.end());
    if(s==t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}