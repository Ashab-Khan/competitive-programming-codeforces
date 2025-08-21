// 339A	Helpful Maths
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n=s.length();
    string p;
    int arr[s.length()];
    for(int i=0;i<s.length();i+=2){
        p=p+s[i];
    }
    sort(p.begin(),p.end());
    s="";
    for(int i=0;i<p.length();i++){
       s=s+p[i]; 
       if(i!=p.length()-1) s=s+'+';

    }
   cout<<s;
    return 0;
}
