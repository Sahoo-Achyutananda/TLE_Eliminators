#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        /*
        idea - anna and katie will try to exhaust c first
        then they will procedd to their respective buttons
        */

        int a,b,c;
        cin >> a >> b >> c;
        
        if(c%2 == 0){
            // katie did the last button push - its anna's turn now
            if(a > b){
                cout << "First";
            }else{
                cout << "Second";
            }
        }else{
            if(b > a){
                cout << "Second";
            }else{
                cout << "First";
            }
        }
        cout << endl;
    }

    return 0;
}