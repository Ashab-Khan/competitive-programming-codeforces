// 281A - Word Capitalization
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    char c=s[0];
    char cc=toupper(c);
    string a="";
    a+=cc;
    for(int i=1;i<s.length();i++){
        a+=s[i];
    }
    cout<<a;
    return 0;
}
