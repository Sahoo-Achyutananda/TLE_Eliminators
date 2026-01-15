#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> positions;
        for(int i = 0; i<n; i++){
            int pos;
            cin >> pos;
            positions.push_back(pos);
        }
        
        // easy - just find the max distance between 2 gas stations -
        int start = 0;
        int end = x;

        int maxi = INT_MIN;

        for(int i = 0; i< n; i++){
            int diff = positions[i] - start;
            start = positions[i];
            maxi = max(diff, maxi);
        }

        if(start != end){
            maxi = max(maxi, 2*(end - start));
        }

        cout << maxi << endl;

    }

    return 0;
}