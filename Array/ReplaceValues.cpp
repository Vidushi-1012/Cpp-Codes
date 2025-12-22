#include<bits/stdc++.h>
using namespace std;
void ReplaceValues(vector<int>& nums, int n) {
    for (int i = 0; i < n; i++) {
        if (n % 2 != 0) 
            nums[i] = 1; 
        else 
            nums[i] = 0;
    }
}

int main(){
    int n;
    cin>>n;
    int val;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>val;
        nums.push_back(val);
    }
    ReplaceValues(nums,n);
    for(int x:nums){
        cout<<x<<" ";
    }
}