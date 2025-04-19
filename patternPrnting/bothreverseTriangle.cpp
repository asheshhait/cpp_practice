# include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter your number of row";
    cin>>n;
    // int m;
    // cout<<"enter your number of row";
    // cin>>m;
    for(int i=1; i<=n;i++){    //row
        for(int j = n;j>=n-i+1; j--){// col
            cout<<j<<" ";
        }
        cout<<endl;
    }
}