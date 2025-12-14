#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int fact=1;
//     for(int i=n;i>=1;i--){
//         fact*=i;
//     }
//     cout<< fact;
// }
int FactorialNum(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    cout<<FactorialNum(n);
}