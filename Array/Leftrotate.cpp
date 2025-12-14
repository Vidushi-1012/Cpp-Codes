#include<bits/stdc++.h>
using namespace std;
int main(){
    int d,n,val;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>val;
        nums.push_back(val);
    }
    cin>>d;
    d=d%n;
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+d);
    reverse(nums.begin()+d, nums.end());
    for(auto x:nums){
        cout<<x<<" ";
    }
}