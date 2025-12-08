#include<bits/stdc++.h>
using namespace std;


int solve(int idx, int n, string str, unordered_map<string,int> &mp){
    if(mp.count(str)) return 0;

    mp[str] = 1;
    int count = 1;

    if(n <= 1) return count;

    string one = str.substr(1);
    count += solve(0, n-1, one, mp);

    string second = str[0] + str.substr(2);
    count += solve(0, n-1, second, mp);

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
        result.push_back(solve(0,n,str,mp));
    }

    for(auto r : result){
        cout << r << endl;
    }
}