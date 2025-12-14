#include<bits/stdc++.h>
using namespace std;
int ConsecutiveOnes(vector<int>nums){
    int currcount=0,maxcount=0;
    for(auto x:nums){
        if(x==1){
            currcount++;
        }
        else{
            maxcount=max(maxcount, currcount);
            currcount=0;
        }
    }
    return max(maxcount,currcount);
}
int main(){
    int n,val;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>val;
        nums.push_back(val);
    }
    cout<<ConsecutiveOnes(nums);


}