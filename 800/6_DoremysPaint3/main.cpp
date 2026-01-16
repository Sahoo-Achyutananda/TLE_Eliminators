#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> nums;
        for(int i = 0; i< n; i++){
            int num;
            cin >> num;
            nums.push_back(num);
        }

        unordered_map<int,int> mp;

        for(auto num : nums){
            mp[num]++;
            if(mp.size() > 2){
                cout << "NO" << endl;
                break;
            }
        }

        if(mp.size() == 2){
            int a = -1, b = -1;
            for(auto [key,value] : mp){
                if(a==-1){
                    a = value;
                }else if(b == -1){
                    b = value;
                }
            }

            if(a == b || a == b + 1 || b == a + 1){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else if(mp.size() == 1){
            cout << "YES" << endl;
        }
    }

    return 0;
}