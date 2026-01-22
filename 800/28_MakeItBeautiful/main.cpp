#include<bits/stdc++.h>
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

        sort(nums.begin(), nums.end());

        if(nums[0] == nums[n-1]){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            cout << nums[n-1] << " ";
            for(int i = 0; i< n-1; i++){
                cout << nums[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}