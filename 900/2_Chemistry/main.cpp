#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;

        int L = n - k;

        unordered_map<char,int> freq;
        for(char c : str) freq[c]++;

        int pairs = 0;
        for(auto &p : freq){
            pairs += p.second / 2;
        }

        if(pairs >= L/2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
