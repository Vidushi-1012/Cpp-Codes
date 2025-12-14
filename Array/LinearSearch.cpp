#include<bits/stdc++.h>
using namespace std;
void LinearSearch(vector<int>& nums, int target){
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
            cout << i;
            return;
        }
    }
    cout << -1;
}
int main(){
    int n,val;
    vector<int>nums;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        nums.push_back(val);
    }
    int target;
    cin>>target;
    LinearSearch(nums,target);

}