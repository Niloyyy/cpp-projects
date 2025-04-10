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

ll fact(int x){
	if(x == 0) return 1;
	ll ans = 1;
	for(int i = 1; i <= x;i++){
		ans *= i;
		ans %= mod;
	}
	return (ans % mod);
}


ll mod_mult(ll a, ll b) {
    return (a % mod) * (b % mod) % mod;
}

ll nPr(ll n, ll r) {
    if (r > n) return 0;

    ll result = 1;
    for (ll i = 0; i < r; ++i) {
        result = mod_mult(result, n - i);
    }

    return result;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , ze = 0; cin >> n;
    	vector<int>v(n);
    	for(int i = 0 ; i < n;i++){
    		cin >> v[i];
    		if(v[i] == 0) ze++;
    	}
    	int mx = *max_element(v.begin() , v.end());
    	vector<int>bits(msb(mx)+1  , 0);
    	for(int bit = 0 ; bit <= msb(mx);bit++){
    		bool f = true;
    		for(int i = 0 ; i < n;i++){
    			if( (v[i] & (1<<bit)) == 0){
    				bits[bit] = 0;
    				f = false;
    				break;
    			}
    		}
    		if(f)  bits[bit] = 1;
    	}
    	int gold = 0 , g;
    	for(int i = 0 ; i < n;i++){
    		int t = 0;
    		for(int bit = 0 ; bit <= msb(mx) ; bit++){
    			if(bits[bit]) t += (1<<bit);
    		}
    		if(t == v[i]) gold++ , g = t;
    	}
    	if(ze > 1){
    		ll zz = nPr(ze , 2ll) % mod;
    		ll rem = fact(n - 2ll) % mod;
    		ll ans = 1ll * (zz * rem ) % mod;
    		cout<<ans<<endl;
    	}else if(gold > 1 and g != 0){
    		ll gg = nPr(gold , 2ll) % mod;
    		ll rem = fact(n - 2) % mod;
    		ll ans = 1ll * (gg * rem) % mod;
    		cout<<ans<<endl;
    	} else cout<<0<<endl;
    
    }
    return 0;
}