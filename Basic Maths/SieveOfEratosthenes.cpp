#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int>res;
    for(int i=2;i<=n;i++){
        if(isprime(i)) res.push_back(i);
    }
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0;
}