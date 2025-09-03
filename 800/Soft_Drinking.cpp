//151A - Soft Drinking

#include<iostream>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totaldrink=k*l;
    int toast=totaldrink/nl;
    int ttlimes=c*d;
    int ttsalt=p/np;
    int ans=min(toast,min(ttlimes,ttsalt))/n;
    cout<<ans;
}