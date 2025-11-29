#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, rev=0;
    cin>>n;
    while(n>0){
        int revNum= n%10;
        rev=rev*10+revNum;
        n=n/10;
    }
    cout<<rev;
}