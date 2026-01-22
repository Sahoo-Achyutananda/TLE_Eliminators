#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        // i need atleast 2 spots to make two different permutations
        // n - (a + b) >= 2 -> i can build one
        // n = 1 is a special case ?

        int diff = n - (a + b);

        if(a + b + 2 <= n || (a == b && b == n)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    

    }

    return 0;
}