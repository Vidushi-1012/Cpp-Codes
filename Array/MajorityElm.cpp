#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums){
    int candidate=0,count=0;
    for(int x:nums){
        if(count==0) candidate=x;
        if(x==candidate) count++;
        else count--;
    }
    return candidate;
}
int main(){
    int n,val;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>val;
        nums.push_back(val);
    }
    cout<<majorityElement(nums);
}
