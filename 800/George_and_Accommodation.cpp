//467A - George and Accommodation

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p,s;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>p>>s;
        if(s-p>=2){
          count++;
        }
    }
    cout<<count;
}