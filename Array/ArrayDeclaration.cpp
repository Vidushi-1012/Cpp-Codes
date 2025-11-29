#include<bits/stdc++.h>
using namespace std;

int main(){
    //fixed array
    int arr[5];
    arr[0]=100;
    arr[1]=200;
    arr[2]=300;
    arr[3]=400;
    arr[0]=500; //overriding the value at index 0
    arr[4]=600; //out of bounds

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    // Finding the size/length of the array
    cout<<"The size of the array is: "<<sizeof(arr)/sizeof(arr[0])<<endl; //total size of the array divided by the first element of the array gives the total number of elements in the array.

    //user defined array
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    
    return 0;
}