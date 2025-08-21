//158A – Next Round

#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int count=0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>> arr[i];
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]>0 && arr[i]>=arr[k-1]) count++;
    }
    cout<<count;
    return 0;
}
