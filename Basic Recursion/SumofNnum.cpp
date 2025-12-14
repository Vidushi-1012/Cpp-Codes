#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=5;i++){
//         sum+=i;
//     }
//     cout<< sum;
// }
int SumofNum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<SumofNum(n);
}