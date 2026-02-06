#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int a,b,n;
        cin >> a >> b >> n;

        vector<int> nums(n);

        for(int i = 0; i< n; i++)
            cin >> nums[i];

        long long ans = 0;

        for(int i = 0; i< n; i++){
            ans += min((long long)nums[i], (long long)(a - 1)); // it cannot exceed a ... 
        }

        ans += (b);

        cout << ans << endl;


    }


    return 0;
}