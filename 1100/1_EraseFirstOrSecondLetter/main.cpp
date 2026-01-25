#include<bits/stdc++.h>
using namespace std;


int solve(int n, string s){
    unordered_set<char> seen;
    long long ans = 0;

    for(int i = 0; i < n; i++){
        if(!seen.count(s[i])){
            seen.insert(s[i]);
            ans += (n - i);
        }
    }
    return ans;
}


int main(){
    int t;
    cin >> t;
    vector<int> result;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;

        result.push_back(solve(n,str));
    }

    for(auto r : result){
        cout << r << endl;
    }
}