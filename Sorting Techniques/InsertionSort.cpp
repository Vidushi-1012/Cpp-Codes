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
    for(int i=1;i<n;i++){
        int key=nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
