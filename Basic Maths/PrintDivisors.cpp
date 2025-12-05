#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> res;
        for(int i=1;i*i<=n;i++){
            if (n%i==0) {
                res.push_back(i);
                if (i!=n/i) {
                    res.push_back(n/i);
                }
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};

int main() {
    int n;
    Solution s;
    cin>>n;
    vector<int> ans = s.divisors(n);
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
