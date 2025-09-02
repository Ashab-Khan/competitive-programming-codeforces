//469A - I Wanna Be the Guy

#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p,q;
    int j=0;
    set<int> st;
    while(j<2){
        cin>>p;
        for(int i=0;i<p;i++){
            cin>>q;
            st.insert(q);
        }
        j++;
    }
    if(st.size()==n){
        cout<<"I become the guy.";
    }
    else{
         cout<< "Oh, my keyboard!";
    }
}