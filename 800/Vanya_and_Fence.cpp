//677A - Vanya and Fence

#include<iostream>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int p;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>p;
        if(p<=h) count++;
        else if(p%h==0){
            count+=(p/h);
        }
        else{
            count+=(p/h);
            count++;
        }
    }
    cout<<count;
}