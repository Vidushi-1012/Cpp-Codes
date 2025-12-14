#include<bits/stdc++.h>
using namespace std;
void MoveAllZeros(vector<int>&nums){
    int k=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            nums[k]=nums[i];
            k++;
        }
        
    }
    while(k<nums.size()){
            nums[k]=0;
            k++;
        }
}
int main(){
    int n,val;
    vector<int>nums;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        nums.push_back(val);
    }
    MoveAllZeros(nums);
    for(int x :nums){
        cout<<x<<" ";
    }
}