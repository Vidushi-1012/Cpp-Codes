#include<bits/stdc++.h>
using namespace std;
int SingleNum(vector<int>&nums){
    int x=0;
    for(int n:nums){
        x=x^n;
    }
    return x;
}
int main(){
    int n,val;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>val;
        nums.push_back(val);
    }
    cout<<SingleNum(nums);
}