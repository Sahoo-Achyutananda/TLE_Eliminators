#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a,b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        set<pair<int,int>> king_pos, queen_pos;

        king_pos.insert({xk-a,yk-b});
        king_pos.insert({xk-a,yk+b});
        king_pos.insert({xk+a,yk-b});
        king_pos.insert({xk+a,yk+b});
        king_pos.insert({xk-b,yk-a});
        king_pos.insert({xk-b,yk+a});
        king_pos.insert({xk+b,yk-a});
        king_pos.insert({xk+b,yk+a});

        queen_pos.insert({xq-a,yq-b});
        queen_pos.insert({xq-a,yq+b});
        queen_pos.insert({xq+a,yq-b});
        queen_pos.insert({xq+a,yq+b});
        queen_pos.insert({xq-b,yq-a});
        queen_pos.insert({xq-b,yq+a});
        queen_pos.insert({xq+b,yq-a});
        queen_pos.insert({xq+b,yq+a});

        set<pair<int,int>> result;
        set_intersection(king_pos.begin(), king_pos.end(),
                          queen_pos.begin(), queen_pos.end(),
                          inserter(result, result.begin()));
        


        int common = 0;
        
        cout << result.size() << endl;
    }

    return 0;
}