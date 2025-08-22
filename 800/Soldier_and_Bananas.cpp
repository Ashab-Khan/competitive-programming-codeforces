//546A	Soldier and Bananas

#include<iostream>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int totalCost = k * w * (w + 1) / 2;
    cout<<max(0,totalCost-n);
}