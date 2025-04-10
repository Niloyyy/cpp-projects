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

int binpow(int a, int b) {
    a %= mod;
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n;
        cin >>n;

        vector <int> v(n);
        for (auto &it : v) cin >> it;
        vector <vector <set <int>>> dp(n+1, vector <set <int>>(5));
        dp[0][0].insert(0);
        dp[0][1].insert(0);
        dp[0][2].insert(0);
        dp[0][3].insert(0);
        dp[0][4].insert(0);
        for (int i=1; i<=n; i++)
        {
            dp[i][0].insert( __gcd(*dp[i-1][0].begin(), v[i-1]));
            dp[i][1].insert(*dp[i-1][0].begin());
            dp[i][2].insert(__gcd(v[i-1], *dp[i-1][1].begin()));
            dp[i][3].insert(*dp[i-1][1].begin());
            for (auto &it : dp[i-1][2])
            {
                dp[i][2].insert(__gcd(it, v[i-1]));
                dp[i][3].insert(it);
            }
            for (auto &it : dp[i-1][3])
            {
                dp[i][4].insert(__gcd(it, v[i-1]));
            }
            for (auto &it : dp[i-1][4])
            {
                dp[i][4].insert(__gcd(it, v[i-1]));
            }
        }

        int ans = 1;
        for (int i=0; i<5; i++) for (auto &it : dp[n][i]) ans = max(ans, it);
        cout <<ans <<"\n";
    }
    return 0;
}