//116A - Tram

#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b;
    int passenger=0;
    int maxpass=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        passenger-=a;
        passenger+=b;
        maxpass=max(maxpass,passenger);
    }
    cout<<maxpass;
}