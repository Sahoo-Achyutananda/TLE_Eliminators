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

        int ops = 0;
        // just compress all consecutive odd numbers and all consecutive even numbers
        // odd * odd = odd always ... to maintain parity difference that is enough
        for(int i = 1; i< n; i++){
            if((nums[i-1]%2 == 0 && nums[i]%2 == 0) || (nums[i-1]%2 == 1 && nums[i]%2 == 1)){
                ops++;
            }
        }

        cout << ops << endl;
    }

    return 0;
}