//236A – Boy or Girl

#include <iostream>
#include<set>
using namespace std;

int main() {
    set<char> s;
    string str;
    cin>>str;
    for (int i = 0; i < str.length(); i++) {
        s.insert(str[i]);
    }
    if(s.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}
