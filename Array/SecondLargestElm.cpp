#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
    }
    // int mx=*max_element(arr,arr+n);
    // vector<int>v;
    // for(int i=0;i<n;i++) {
    //     if(arr[i]!=mx) {
    //     }
    // }
    // if(v.empty()) return 0;
    // int sec=*max_element(v.begin(),v.end());
    // cout<<sec;

    // approach 2- sort
    sort(arr,arr+n);
    int mx=arr[n-1];
    int sec=mx;
    bool found=false;
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=mx){
            sec=arr[i];
            found=true;
            break;
        }
    }
    if(!found) {
        cout<<"No second largest";
    }
    else {
        cout<<sec;
    }


}





