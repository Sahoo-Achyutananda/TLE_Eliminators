#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int>nums(n);
        bool yes = false;
        for(int i = 0; i< n; i++){
            cin >> nums[i];
            if(nums[i] == x) yes = true;
        }

        if(yes){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}