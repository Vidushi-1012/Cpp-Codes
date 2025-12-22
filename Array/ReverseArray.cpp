#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,val;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>val;
        nums.push_back(val);
    }
    reverse(nums.begin(), nums.end());
    for(int x:nums){
        cout<<x<<" ";
    }
}