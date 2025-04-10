#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int mod = 998244353;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n , x = 0 , ans = 0; cin >> n;
    vector<long long> v(n);
    for(auto &i : v) cin >> i;
    for(int i = 1 ; i < n;i++){
    	ans += (1ll * i * v[i]) % mod;
    	ans %= mod;
    	x += v[i-1];
    	int sz = (int)log10(v[i]) + 1; // num of digit of v[i] in 10 base
    	string s = "1";
    	for(int ss = 0 ; ss < sz ;ss++){
    		s += '0';
    	}
    	ans += ((1ll * stoll(s) % mod) * (x % mod)) % mod;
    	ans %= mod;
    }
    cout << ans;

    return 0;
}