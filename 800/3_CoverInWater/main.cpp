#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string str;
        cin >> n >> str;

        int empty = 0, curr_empty = 0;
        int max_consecutive = INT_MIN;
        for(int i = 0; i < n; i++){
            if(str[i] == '.'){
                empty++;
                curr_empty++;
            }else{
                curr_empty = 0;
            }
            max_consecutive = max(curr_empty,max_consecutive);
        }

        if(max_consecutive >= 3){
            cout << 2 << endl;
        }else{
            cout << empty << endl;
        }
    }

    return 0;
}