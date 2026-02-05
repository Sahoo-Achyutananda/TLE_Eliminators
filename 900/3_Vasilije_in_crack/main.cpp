#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        long long n,k,x;
        cin >> n >> k >> x;

        long long min_sum = k*(k+1)/2, max_sum = (n*(n+1)/2) - ((n-k)*(n-k+1)/2);
        // if x lies between these two then YES else NO - this is true
        // for(int i = 1; i<= k; i++){
        //     min_sum += i;
        // }

        // for(int i = n; i > n - k; i--){
        //     max_sum += i;
        // }

        if(x >= min_sum && x <= max_sum){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}