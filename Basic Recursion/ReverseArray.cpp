#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
// }

void ArrayReversal(int n, int arr[]) {
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n;i++){
        cin >> arr[i];
    }
    ArrayReversal(n, arr);
    return 0;
}