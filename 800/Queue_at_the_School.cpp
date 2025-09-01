//266B - Queue at the School

#include<iostream>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    int i=0;
    int j=0;
    while(j<t){
        while(i<n){
            if(s[i]=='B' && s[i+1]=='G'){
            swap(s[i],s[i+1]);
            i++;
            }
            i++;
          }
        j++;
        i=0;
    }
    cout<<s;
}