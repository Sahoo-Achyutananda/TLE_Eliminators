#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> nums;
        int expected = 1, out_of_place = 0;
        for(int i = 0; i<n; i++){
            int num;
            cin >> num;

            if(num != expected) out_of_place++;
            expected++;
            nums.push_back(num);
        }

        // int mountains = 0;
        // for(int i = 1; i< n-1; i++){
        //     if(nums[i-1] < nums[i] && nums[i] > nums[i+1]) mountains++;
        // }

        // if(2*mountains == out_of_place){
        //     cout << "YES" << endl;
        // }else{
        //     cout << "NO" << endl;
        // }

        /*
        i observed that there is a chain reaction possible -
        the odd places must be sorted and the even places must be sorted
        and nums[0] < nums[1]
        */

        // bool even = true, odd = true;
        
        // for(int i = 2; i< n; i+=2){
        //     if(nums[i-2] > nums[i]) even = false;
        // }

        // for(int i = 3; i<n; i+=2){
        //     if(nums[i-2] > nums[i]) odd = false;
        // }

        /*
        Think of the biggest elements in the array and how they'll move -
        and when they can move
        -> they can move only when they have two smaller elements on its left and right
        -> also 1 must be in the first position

        */

        if(nums[0] == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }


    }

    return 0;
}