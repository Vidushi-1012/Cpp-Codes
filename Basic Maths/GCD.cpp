// bruteforce
#include<bits/stdc++.h>
using namespace std;
int gcd(int n1, int n2){
    int i;
    int gcd=1;
    for( i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    return gcd;
}
int main(){
    int n1=12;
    int n2=6;
    cout<<gcd(n1,n2);
}

// euclid's
// recursive euclids

// built in function gcd
// int n1=*min_element(nums.begin(), nums.end());
// int n2=*max_element(nums.begin(),nums.end());
// return __gcd(n1,n2);;
// 
// 
// 
