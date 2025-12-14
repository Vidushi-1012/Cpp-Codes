#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     string s;
//     cin>>n>>s;
//     string res = "";
//     for (int i = 0; i < n; ++i) {
//         res += s; 
//         if(i!=n-1){
//             res+=" ";
//         }
//     }
//     cout << res << " "; 
//     return 0;

// }
string recursiveName(string s, int n){
    string res="";
    for (int i = 0; i < n; ++i) {
        res += s; 
        if(i!=n-1){
            res+=" ";
        }
    }
    return res;
}
int main(){
    int n;
    string s;
    cin>>n>>s;
    cout<<recursiveName(s,n);
    return 0;
}