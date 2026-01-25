#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> nums(n+1);
        bool flag = true;
        int diff = INT_MAX;

        cin >> nums[1];
        // cout << nums[1] << " ";

        for(int i = 2; i<= n; i++){
            cin >> nums[i];
            // cout << nums[i] << " ";
            if(nums[i] < nums[i-1]){ 
                flag = false; 
                // break;
            } // detect if array is already unsorted

            diff = min(diff, abs(nums[i] - nums[i-1])); // it'll always be +ve when the array is sorted
        }
        // cout << endl;

        if(flag == false){
            cout << 0 << endl;
            continue;
        }

        int ans = (diff /2 ) + 1;
        cout << ans << endl;
    }

    return 0;
}
