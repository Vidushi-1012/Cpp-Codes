#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int num=2;
    for(int i=0;i<n;i++){
        int a=0,b=0;
        while(!isPrime(num)) num++;
        a=num++;
        while(!isPrime(num)) num++;
        b=num++;
        cout<<a<<" "<<b<<" "<<a+b<<" ";
    }
    return 0;
}
