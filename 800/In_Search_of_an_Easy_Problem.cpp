//1030A - In Search of an Easy Problem

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p;
    int flag=0;
    for(int i=0;i<n;i++){
        cin>>p;
        if(p==1){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
}