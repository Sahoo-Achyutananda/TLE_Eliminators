#include<bits/stdc++.h>
using namespace std;

int main(){
    // the test cases are intentionally made tricky 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> nums(n);

        int mini = INT_MAX;
        for(int i = 0;i<n; i++){
            cin >> nums[i];
            mini = min(mini, nums[i]);
        }

        vector<int> b,c;
        for(auto num : nums){
            if(num > mini){
                c.push_back(num);
            }else{
                b.push_back(num);
            }
        }

        if(b.size() == 0 || c.size() == 0){ cout << -1 << endl; continue;}

        cout << b.size() << " " << c.size() << endl;
        for(auto x : b){
            cout << x << " ";
        }
        cout << endl;

        for(auto x : c){
            cout << x << " ";
        }
        cout << endl;

    }

    return 0;
}