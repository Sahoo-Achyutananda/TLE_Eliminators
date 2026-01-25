#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int temp = n;
        int digits = 0;
        while(temp){
            temp = temp/10;
            digits++;
        }

        int div = 1;
        for(int i = 0; i< digits-1; i++){
            div*=10;
        }

        // cout << digits << " " << div << endl;
        cout << 9*(digits-1) + n/(div) << endl;

    }

    return 0;
}