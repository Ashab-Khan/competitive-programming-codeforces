//705A - Hulk

#include<iostream>
using namespace std;

int main(){
    string s1="I hate it";
    string s2="I love it";
    string s3="I hate that ";
    string s4="I love that ";
    int n;
    cin>>n;
    string ans="";
    for(int i=1;i<=n;i++){
        if(i==n){
            if(i%2==0){
                ans+=s2;
            }
            else{
                ans+=s1;
            }
        }
        else if(i%2!=0){
            ans+=s3;
        }
        else{
            ans+=s4;
        }
    }
    cout<<ans;
}