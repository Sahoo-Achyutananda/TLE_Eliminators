#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        // i'm doing the revrese -> coming from the des to source - 
        // if source is above dest i cannot do it -> only diagonal down and exact down is possible
        if(b > d){
            cout << -1 << endl;
            continue;
        }

        int ops = 0;
        while(d!=b){
            c--;
            d--;
            ops++;
        }

        if(a < c){
            cout << -1 << endl;
            continue;
        }

        while(c!=a){
            c++;
            ops++;
        }

        cout << ops << endl;

    }

    return 0;
}