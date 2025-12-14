#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    int val;
    for(int i=0;i<n;i++){
        cin>>val;
        nums.push_back(val);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(nums[j]>nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

}