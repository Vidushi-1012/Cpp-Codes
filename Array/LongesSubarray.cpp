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
    int left=0,right=0;
    int maxlen=0;
    int sum=nums[0];
    int k;
    cin>>k;
    while(right<n){
            while(left<=right && sum>k){
                sum-=nums[left];
                left++;
            }
            if(sum==k){
                maxlen=max(maxlen,right-left+1);
            }   
            right++;
            if(right<n) {
                sum+=nums[right];
            }
        }
        cout<< maxlen;
}