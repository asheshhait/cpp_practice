# include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter your number of row";
    cin>>n;
    int m;
    cout<<"enter your number of row";
    cin>>m;
    for(int i=1; i<=n;i++){    //row
        for(int j = 1;j<=m; j++){// col
            cout<<j;
        }
        cout<<endl;
    }
}