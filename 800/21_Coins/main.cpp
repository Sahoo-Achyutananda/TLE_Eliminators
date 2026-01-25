#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        unsigned long long n,k;
        cin >> n >> k;

        /*
        using 2 and any number x ... we can generate all even numbers and all numbers >= x
        */
        if(n%2 == 0){
            cout << "YES" << endl;
        }else{
            if(k%2 == 0){
                // mujhe odd chahiye but dono denomination even hai -> no way to get odd
                cout << "NO" << endl;
            }else{
                // mujhe odd chahiye and k is odd
                if(n >= k){
                    // number(n) k se bada ya barabar hai => k + 2*i will generate all odd numbers >= k
                    cout << "YES" << endl;
                }else{
                    // n < k => not possible to generate
                    cout << "NO" << endl;
                }
            }
        }

    }

    return 0;
}