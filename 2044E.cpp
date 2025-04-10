#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int
#define endl '\n'
#define f first
#define s second
using namespace std;
using namespace __gnu_pbds; 
const double PI = acos(-1);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1 , t = 1; cin >> tc;
    while(tc--){
        ll k , l1 , r1 , l2 , r2; cin >> k >> l1 >> r1 >> l2 >> r2;
        vector<ll>k_pow{1};
        for(ll i = k ; i  <= 1e9;i = 1ll * i * k){
            k_pow.push_back(i);
        }
        ll ans = 0;
        for(int i = 0 ; i < k_pow.size();i++){
            if(k_pow[i] > r2 / l1) continue;
            ll lim_l2 = k_pow[i] * l1;
            ll lim_r2 = k_pow[i] * r1;
            if(lim_l2 > r2 or lim_r2 < l2) continue;
            ll x = min(r2 , lim_r2) / k_pow[i];
            ll y = (max(l2 , lim_l2) - 1) / k_pow[i];
            ans += (x - y);
        }
        cout<<ans<<endl;
    }
    return 0;
}