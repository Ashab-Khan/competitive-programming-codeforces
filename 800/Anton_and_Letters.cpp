// 443A - Anton and Letters

#include<iostream>
#include<set>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    set<char> st;
    string ans="";

    for(char c:s){
        if(isalpha(c)){
            st.insert(c);
        }
    }
    cout<<st.size();
}