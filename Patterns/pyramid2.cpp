#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        // spaces
        for(j=0;j<=i;j++){
            cout<<"  ";
        }
        for(k=9;k>=2*i-1;k--){
            cout<<"* ";
        }
        
        cout<<endl;
    }
} 