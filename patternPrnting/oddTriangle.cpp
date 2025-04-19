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
        for(int j = 1;j<=2*i-1; j++){// col
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }
}