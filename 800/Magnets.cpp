//344A - Magnets

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    int p,f;
    cin>>f;
    for(int i=1;i<n;i++){
        cin>>p;
       if(p!=f){
        count++;
       }
       f=p;
    }
    cout<<count;
}