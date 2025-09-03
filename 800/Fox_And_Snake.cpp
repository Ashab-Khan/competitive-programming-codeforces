//510A - Fox And Snake

#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int p=1;
    for(int i=1;i<=n;i++){
         if(i%2!=0){
            for(int j=1;j<=m;j++) cout<<"#";
         } else{
                if(p%2!=0){
                   for(int j=1;j<=m-1;j++) cout<<".";
                   cout << "#";
                }
                else{
                    cout << "#";
                for (int j = 2; j <= m; j++) cout << ".";
                }
                p++;
            }
        cout<<"\n";
    }
}