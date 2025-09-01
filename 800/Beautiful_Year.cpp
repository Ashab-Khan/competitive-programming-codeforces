//271A - Beautiful Year

#include<iostream>
#include<set>
using namespace std;

bool distinct(int year){
    string s = to_string(year);
    int le=s.length();
    set<char> st(s.begin(),s.end());
    return st.size()==le;
}
int main(){
    int n;
    cin>>n;
    n=n+1;
    while(!distinct(n)) n=n+1;
    cout<<n;


}