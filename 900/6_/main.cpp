#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        int i;
        for(i = 1; i <= n; i++){
            if(n%i == 0){
                continue;
            }else{
                break;
            }
        }

        cout << i - 1 << endl;

        
    }

    return 0;
}