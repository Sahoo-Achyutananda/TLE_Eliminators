#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        vector<int> ans(n,0);

        for(int i = 0; i< n; i++){
            cin >> nums[i];
            ans[i] = n - nums[i] + 1;
        }

        // it was tricky -> but i observed some pattern 
        // subtract the nums with n and add +1 to each

        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;

    }   

    return 0;
}