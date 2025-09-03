//1352A - Sum of Round Numbers

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        vector<int> parts;
        int place =1;
            while(p>0){
                int digit=p%10;
                if(digit!=0){
                    parts.push_back(digit*place);
                }
                p=p/10;
                place*=10;
            }
        cout << parts.size() << "\n";
        for (int x : parts) cout << x << " ";
        cout << "\n";
    }
    
}