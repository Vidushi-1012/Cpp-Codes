#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cin>>k;
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<k;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
