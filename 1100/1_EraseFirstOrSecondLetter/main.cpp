#include<bits/stdc++.h>
using namespace std;


int solve(int n, string str){
    unordered_set<string> visited;
    queue<string> q;

    visited.insert(str);
    q.push(str);

    while(!q.empty()){
        string cur = q.front();
        q.pop();

        int len = cur.size();
        if(len <= 1) continue;

        // remove first character
        string one = cur.substr(1);
        if(!visited.count(one)){
            visited.insert(one);
            q.push(one);
        }

        // remove second character
        if(len >= 2){
            string second = cur[0] + cur.substr(2);
            if(!visited.count(second)){
                visited.insert(second);
                q.push(second);
            }
        }
    }

    return visited.size();
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