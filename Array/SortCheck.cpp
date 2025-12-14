#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],b[n];
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
    }
    for(int i=0;i<n;i++) {
        b[i]=arr[i];
    }
    sort(b,b+n);
    bool status=true;
    for(int i=0;i<n;i++){
         if(arr[i]!=b[i]) {
            status="false";
         }
    }
    if(status) {
        cout<<"true";
    }
    else {
        cout<<"false";
    }
}
