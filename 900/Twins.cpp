//160A - Twins

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr+0,arr+n);
    int sum2=0;
    int count=0;
    for(int i=n-1;i>=0;i--){
        sum2+=arr[i];
        int mymax=(sum-sum2);
        count++;
        if(sum2>mymax){
            break;
        }
    }
    cout<<count;
}