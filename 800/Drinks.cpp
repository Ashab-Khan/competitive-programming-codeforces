//200B - Drinks

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p;
    float sum=0;
    for(int i=0;i<n;i++){
        cin>>p;
        sum+=p;
    }
    float ans=float(sum/n);
    cout<<ans;
}