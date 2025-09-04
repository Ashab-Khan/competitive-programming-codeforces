//133A - HQ9+

#include<iostream>
using namespace std;
int main(){
    string p;
    cin>>p;
    bool flag=false;
    for(int i=0;i<p.length();i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
            flag=true;
        }
    }
    if(flag==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}