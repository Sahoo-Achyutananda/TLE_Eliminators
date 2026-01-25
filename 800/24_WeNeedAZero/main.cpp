#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);

        for(int i = 0; i< n; i++)
            cin >> nums[i];
        
        // XOR have to be 0 -> 011 | 011 -> same number 0
        // what does xor of two numbers give me ? 101 ^ 010 -> 111 -> 1 -> a place where bits differ (in this case its all)
        // 1010 ^ 0010 -> 1000
        // 1000 ^ 0001 -> 1001

        // now 1010^1001 = 0011
        // 0001^1001 = 1000
        // 0010^1001 = 1011
        // 0011 ^ 1000 = 1011

        // if i take the xors of all numbers i'll get a number that contains the active bits of among all numbers

        int x = 0;
        for(int i = 0; i< n; i++)
            x = x ^ nums[i];
        
        if(n%2 == 1){
            cout << x << endl;
        }else{
            if(x == 0){
                cout << 0 << endl;
            }else{
                cout << -1 << endl;
            }
        }

        // didnt quite work ... 
        // when will it not work ?
        // suppose the array has 0 -> 0 1 2 3 - here xor becomes 0
        
    }

    return 0;
}