#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n, k, x;
        cin >> n >> k >> x;

        if(x == 1){
            // 1 is forbidden
            if(k == 1){
                // we were given max limit as 1 and we cannot use 1
                cout << "NO";
            }else{
                if(k >= n){
                    cout << "YES" << endl;
                    cout << 1 << endl;
                    cout << n;
                }else{
                    // if i have 2 and 3 available i can generate any number
                    if(k == 2){
                        // only 2 available but not 3 -> can only generate any even number
                        if(n%2 == 0){
                            int ans = n/2;
                            cout << "YES" << endl;
                            cout << ans << endl;
                            for(int i = 0; i< ans; i++){
                                cout << 2 << " ";
                            }
                        }else{
                            cout << "NO" ;
                        }
                    }else if(k >= 3){
                        // i have both 2 and 3 - i can genarte any number
                        if(n%2 == 0){
                            int ans = n/2;
                            cout << "YES" << endl;
                            cout << ans << endl;
                            for(int i = 0; i< ans; i++){
                                cout << 2 << " ";
                            }
                        }else{
                            int twos = (n/2) - 1;
                            int threes = 1;
                            
                            cout << "YES" << endl;
                            cout << twos + threes << endl;
                            for(int i = 0; i< twos; i++){
                                cout << 2 << " ";
                            }
                            cout << 3 << " ";
                        }
                    }else{
                        cout << "NO";
                    }
                }
            }
        }else{
            cout << "YES" << endl;
            cout << n << endl;
            for(int i = 0; i < n; i++){
                cout << 1 << " ";
            }
        }

        cout << endl;

    }

    return 0;
}