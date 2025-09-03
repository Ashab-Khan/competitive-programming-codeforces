//141A - Amusing Joke

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s1,s2;
    string p;
    cin>>s1>>s2>>p;
    string a=s1+s2;
    sort(a.begin(),a.end());
    sort(p.begin(),p.end());
    if(a==p){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}