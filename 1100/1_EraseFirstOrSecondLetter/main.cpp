#include<bits/stdc++.h>
using namespace std;


int solve(int idx, int n, string str, unordered_map<string,int> &mp){
    if(n == 1) return 1;
    // remove one char
    int count = 1;
    string one = str.substr(idx + 1, n - idx);
    if(mp.count(one) == false){
        mp[one]++;
        // cout << one << endl;
        count = count + solve(0,n-1,one,mp);
    }
    // remove second char
    string second = str[idx] + str.substr(idx + 2, n - idx - 2);
    if(mp.count(second) == false){
        mp[second]++;
        // cout << second << endl;
        count = count + solve(0,n-1,second,mp);
    }

    return count;
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

        unordered_map<string,int> mp;
        mp[str]++;
        result.push_back(solve(0,n,str,mp));
    }

    for(auto r : result){
        cout << r << endl;
    }
}