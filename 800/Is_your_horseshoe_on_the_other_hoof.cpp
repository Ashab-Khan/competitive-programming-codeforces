//228A - Is your horseshoe on the other hoof?

#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    set<int> st;
    for(int i=0;i<4;i++){
        cin>>n;
        st.insert(n);
    }
    cout<<4-st.size();
}