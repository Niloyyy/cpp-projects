#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define F first
#define S second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0 ; i < n;i++) cin >> v[i];
    for(int i = 0 ; i < n;i++){
        int ans = 15;
        for(int one = 0 ; one <= 15 ; one++){
            for(int p = 0 ; p <= 15 ; p++){
                if( (((v[i] + one) << p) ) % (1<<15) == 0) ans = min(ans , p + one);
            }
        }
        cout<<ans<<' ';
    }    
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    // int n; cin >> n;
    // vector<int>v(n);
    // for(int i = 0 ; i < n;i++) cin >> v[i];
    // for(int i = 0 ; i < n;i++){
    //     int t = v[i] , mn = INT_MAX;
    //     for(int bit = msb(t) ; bit >= 0 ; --bit){
    //         if(bit == 0 and (t & (1<<bit))) continue;
    //         int ans = INT_MAX , tm = t , con = (1 << (bit + 1)) - 1;
    //         tm |= con;
    //         ans = (tm - t) + (15 - bit);
    //         mn = min(ans , mn);
    //     }
    //     cout<<min({mn , 16 - lsb(v[i]) , (1<<15) - v[i]}) % 16<<' ';
    //} 

    
    return 0;
}