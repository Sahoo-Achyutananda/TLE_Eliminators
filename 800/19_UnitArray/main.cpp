#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> nums(n);

        int minus = 0, plus = 0;
        for(int i = 0; i< n; i++){
            cin >> nums[i];
            if(nums[i] == -1) minus++;
            else plus++;
        }

        // if(minus%2 == 0){
        //     // we have the multiplication property intact
        //     if(minus <= plus){
        //         cout << 0 << endl;
        //     }else{
        //         cout << abs(minus-plus) << endl;
        //     }
        // }else{
        //     if(minus == plus){
        //         cout << 0 << endl;
        //     }else if(minus < plus){
        //         cout << 1 << endl; // just convert a -1 to +1
        //     }else{
        //         minus--;
        //         plus++;

        //         int diff = minus - plus;
        //         if(diff <= 0){
        //             cout << 1 << endl;
        //         }else{
        //             cout << 1 + diff/2 << endl;
        //         }
        //     }
        // }

        /*
        using the hint -
        First calculate ops1​, the number of flips needed to make the count of −1s less than or equal to 
        the count of 1s. Then, check the parity of the new count of −1s. If it's odd, you need one more 
        (−1→1) flip. The total operations will be ops1​ or ops1+1
        */

        int ops = 0;
        while(minus > plus){
            minus--;
            plus++;
            ops++;
        }
        if(minus%2 == 0){
            cout << ops << endl;
        }else{
            cout << ops + 1 << endl;
        }



    }

    return 0;
}