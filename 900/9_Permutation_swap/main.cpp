#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);

        for(int i = 0; i< n; i++){
            cin >> nums[i];
        }

        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        int g = abs(sorted_nums[0] - nums[0]);

        for(int i = 1; i<n ; i++){
            g = gcd(g, abs(sorted_nums[i] - nums[i]));
        }

        cout << g << endl;

    }

    return 0;
}