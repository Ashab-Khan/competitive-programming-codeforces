//427A - Police Recruits

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p;
    int count=0;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>p;
        if(p==-1){
            if(count<=0){
                ans++;
            }
            else{
                count--;
            }
        }
        else{
            count+=p;
        }
    }
    cout<<ans;
}