# include <iostream>
using namespace std;
int main (){
    int n = 5;
    // cout<<"enter your number of row";
    // cin>>n;
    // int m;
    // cout<<"enter your number of row";
    // cin>>m;
    int a = 1;
    for(int i=1; i<=n;i++){    //row
        for(int j = 1;j<=i; j++){// col
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}