#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&nums,int low,int high){
    int pivot=nums[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(nums[j]<pivot){
            i++;
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
    int temp=nums[i+1];
    nums[i+1]=nums[high];
    nums[high]=temp;
    return i+1;
}
void quickSort(vector<int>&nums,int low,int high){
    if(low<high){
        int pi=partition(nums,low,high);
        quickSort(nums,low,pi-1);
        quickSort(nums,pi+1,high);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    int val;
    for(int i=0;i<n;i++){
        cin>>val;
        nums.push_back(val);
    }
    quickSort(nums,0,n-1);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
