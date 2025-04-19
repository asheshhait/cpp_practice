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
        for(int j = 1;j<=i; j++){// col
        if((i+j)%2==0){
            cout<<1<<" ";
        }
        else
         cout<<0<<" ";
        }
        cout<<endl;
    }
}