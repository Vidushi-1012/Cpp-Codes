#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,val;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>val;
        nums.push_back(val);
    }
    int target;
    cin>>target;

    bool found=false;

    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(nums[i]+nums[j]==target){
                cout<<"Yes";
                found=true;
                break;
            }
        }
        if(found) break;
    }

    if(!found){
        cout<<"No";
    }
    return 0;
}
