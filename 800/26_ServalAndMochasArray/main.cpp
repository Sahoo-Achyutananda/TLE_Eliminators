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
        bool flag = false;
        for(int i = 0; i< n; i++){
            for(int j = i+1; j < n; j++){
                if(__gcd(nums[i], nums[j]) <= 2){ // takes log(nums[i], nums[j])
                    flag = true;
                }
            }
        }

        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}

// time complexity : n*n*log(min(arr[i],arr[j]))