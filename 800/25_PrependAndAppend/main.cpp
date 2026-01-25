#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;

        int l = 0, r = n-1;

        while(l <= r){
            if((str[l] == '0' && str[r] == '1') || (str[l] == '1' && str[r] == '0')){
                l++;
                r--;
            }else{
                break;
            }
        }

        cout << r - l + 1 << endl;
    }

    return 0;
}