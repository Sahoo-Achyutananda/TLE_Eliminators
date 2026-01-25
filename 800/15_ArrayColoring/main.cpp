#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int even = 0, odd = 0;
        vector<int> nums(n);
        for(int i = 0; i<n; i++){
            cin >> nums[i];
            if(nums[i]%2 == 0) even++;
            else odd++;
        }

        if(even%2 == 0 && odd%2 == 0){
            // we can form 2 even groups
            cout << "YES";
        }else if(even%2 == 0 && odd%2 == 1){
            cout << "NO";
        }else if(even%2 == 1 && odd%2 == 0){
            cout << "YES";
        }else if(even%2 == 1 && odd %2 == 1){
            cout << "NO";
        }

        /**
         THe entire algo can be summarized as -
         odd %2 == 1 => NO
         odd %2 == 0 => YES

         or can we ?
         */

        cout << endl;
    }

    return 0;
}