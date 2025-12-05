#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    cout << (isprime(n) ? "True" : "False");
}
bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}