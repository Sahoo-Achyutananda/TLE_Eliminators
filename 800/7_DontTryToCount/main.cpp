#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        string cur = x;
        int ans = 0;

        // Keep appending until cur is long enough
        while(cur.size() < s.size()){
            cur += cur;
            ans++;
        }

        // Check now and with one extra append (important edge case)
        if(cur.find(s) != string::npos){
            cout << ans << "\n";
            continue;
        }

        cur += x;
        ans++;

        if(cur.find(s) != string::npos){
            cout << ans << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
