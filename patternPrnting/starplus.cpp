# include <iostream>
using namespace std;
int main (){
    int n = 5;
   int mid = n/2 +1;
    for(int i=1; i<=n;i++){    //row
        for(int j = 1;j<=n; j++){// col
        if(i==mid|| j== mid){
            cout<<"*"<<" ";
        }
        else
         cout<<" "<<" ";
        }
        cout<<endl;
    }
}