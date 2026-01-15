#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<int> ans;

    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> nums;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            nums.push_back(x);
        }

        if(k == 1){
            bool inc = true;
            for(int i = 1; i< n; i++){
                if(nums[i] < nums[i-1]){
                    inc = false;
                    break;
                }
            }
            if(inc){
                ans.push_back(1);
            }else{
                ans.push_back(0);
            }
        }else{
            ans.push_back(1);
        }
    }   

    for(auto x : ans){
        if(x == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
