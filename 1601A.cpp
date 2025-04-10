#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<int>bit_cnt(30 , 0);
        for(int i = 0 ; i < n;i++){
            int x; cin >> x;
            for(int bit = 0 ; bit < 30;bit++){
                if( ((1<<bit) &x) ) bit_cnt[bit]++;
            } 
        }
        for(int k = 1; k <= n ;k++){
            bool hobe = true;;
            for(int bit = 0 ; bit < 30;bit++){
                if(bit_cnt[bit] % k != 0){
                    hobe = false;
                    break;
                }
            }
            if(hobe) cout <<k<<' ';
        }
       cout <<endl; 
    }
    
    return 0;
}