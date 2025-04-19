# include <iostream>
using namespace std;
int main(){
    int n= 5; 
    for(int i = 1; i<=n; i ++){
        for(int k = 1; k<= n -i+1 ; k ++){// space 
            cout<<" "<<" ";
        
        }
        for(int j = 1; j<= i ; j ++){ // star 
            cout<<j<<" ";
        }
        cout<<endl;
    }

}