//61A - Ultra-Fast Mathematician

#include<iostream>
using namespace std;

int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    string ans="";
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]) ans=ans+"1";
        else ans=ans+"0";
    }
    cout<<ans;
}