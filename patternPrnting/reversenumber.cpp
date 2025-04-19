# include <iostream>
using namespace std;
int main (){
    int n = 5;
    // cout<<"enter your number of row";
    // cin>>n;
    // int m;
    // cout<<"enter your number of row";
    // cin>>m;
    for(int i=1; i<=n;i++){    //row
        for(int j = 1;j<=n-i+1; j++){// col
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}