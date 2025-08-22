//59A - Word

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    int upplett=0;
    int lowlett=0;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            upplett++;
        }
        else{
            lowlett++;
        }
    }
    if(lowlett>=upplett){
       transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    cout<<s;
}