#include<bits/stdc++.h>
using namespace std;
// int main(){
//     // 2 ptr approach
//     string s;
//     getline(cin, s);
//     string cleaned = "";
//     for(char c : s) {
//         if(isalnum(c)) {
//             cleaned += tolower(c);
//         }
//     }
//     int left = 0;
//     int right = cleaned.size() - 1;
//     while(left < right) {
//         if(cleaned[left] != cleaned[right]) {
//             cout << "false";
//             return 0;
//         }
//         left++;
//         right--;
//     }
//     cout << "true";
//     return 0;
// }
    
// reverse function
// int main() {
//     string s;
//     getline(cin, s);
//     string cleaned = "";
//     for (char c : s) {
//         if (isalnum(c)) {
//             cleaned += tolower(c);
//         }
//     }
//     string str_rev = cleaned;     
//     reverse(str_rev.begin(), str_rev.end());
//     if (str_rev == cleaned) {
//         cout << "true";
//     } else {
//         cout << "false";
//     }
//     return 0;
// }
bool isPalindrome(string s) {
    string s_new = "";
    for(char c : s){
        if(isalnum(c)){
            s_new += tolower(c);
        }
    }
    string str_rev = s_new;
    reverse(str_rev.begin(), str_rev.end());
    
    return str_rev == s_new; 
}
int main() {
    string s;
    getline(cin, s);
    if (isPalindrome(s)) {
        cout << "true";
    } 
    else {
        cout << "false";
    }
}
