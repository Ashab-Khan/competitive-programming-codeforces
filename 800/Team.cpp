//231A – Team

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num1,num2,num3;
    int count=0;
    for (int i = 0; i < n; i++) {
        cin >> num1 >> num2 >> num3;
        if(num1!=0 && num2!=0) count++;
        else if(num2!=0 && num3!=0) count++;
        else if(num1!=0 && num3!=0) count++;
    }
    cout<<count;
    return 0;
}
