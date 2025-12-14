#include<bits/stdc++.h>
using namespace std;
vector<int>UnionArr(vector <int> &num1, vector<int> &num2, int m, int n){
    vector<int>Un;
    int i=0,j=0;
    while(i<m && j<n){
        if(num1[i]<=num2[j]){
            Un.push_back(num1[i]);
            i++;
        }
        else if(num1[i]>num2[j]){
            Un.push_back(num2[j]);
            j++;
        }
    }
    while(i<m){
        Un.push_back(num1[i]);
            i++;
    }
    while(j<n){
        Un.push_back(num2[j]);
            j++;
    }
    return Un;

} 
int main(){
    int m,n,val;
    cin>>m;
    vector<int>num1;
    for(int i=0;i<m;i++){
        cin>>val;
        num1.push_back(val);
    }
    cin>>n;
    vector<int>num2;
    for(int i=0;i<n;i++){
        cin>>val;
        num2.push_back(val);
    }
    vector<int>res=UnionArr(num1,num2, m, n);
    set<int>s(res.begin(),res.end());
    for(auto x:s){
        cout<<x<<" ";
    }
// vector.back
}