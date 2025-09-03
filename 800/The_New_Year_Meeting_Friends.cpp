//723A - The New Year: Meeting Friends

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int arr[3] = {x1, x2, x3};
    sort(arr, arr + 3);
    cout << arr[2] - arr[0] << endl;
    return 0;
}