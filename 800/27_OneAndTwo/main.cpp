#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        // vector<int> prod(n+1,1);
        for(int i = 0; i< n; i++){
            cin >> nums[i];
        }

        // for(int i = 1; i<=n; i++){
        //     prod[i] = prod[i-1]*nums[i-1];
        //     // cout << prod[i] << " ";
        // }
        // // cout << endl;

        // int idx = -1;
        // int array_prod = prod[n];
        // // cout << "array_prod " << array_prod << endl;
        // for(int i = 1; i<=n; i++){
        //     int left_prod = prod[i];
        //     int right_prod = array_prod/prod[i];
            
        //     // cout << left_prod << " " << right_prod << endl;
        //     if(left_prod == right_prod){
        //         idx = i;
        //         break;
        //     }
        // }


        // cout << idx << endl;

        //another way is to find 

        int twos = 0, ones = 0;
        for(int i = 0; i< n; i++){
            if(nums[i] == 2) twos++;
            else ones++;
        }

        if(twos%2 == 0){
            int req = twos/2;
            int idx;
            for(idx = 0; idx< n; idx++){
                if(nums[idx] == 2){
                    req--;
                }
                if(req == 0)break;
            }
            cout << idx + 1 << endl;
        }else{
            cout << -1 << endl;
        }


    }

    return 0;
}