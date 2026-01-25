#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int x, k;
        cin >> x >> k;

        // thought : you cannot have two consec number divisible by the same k, 
        // therefore if x%k == 0 .. go to x-1 and then x
        // if x%k != 0 .. directly jump to x
        // only case when answer cannot exist is when k = 1 -> constraints already remove it

        if(x%k != 0){
            cout << 1 << endl;
            cout << x << endl;
        }else{
            cout << 2 << endl;
            cout << x-1 << " " << 1 << endl;
        }
    }

    return 0;
}