#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define ll long long
#define endl '\n'
#define f first
#define s second
using namespace std;
using namespace __gnu_pbds; 
const double PI = acos(-1);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;

int binpow(int a , int n){
	a %= mod;
	int ans = 1;
	while(n){
		if(n & 1) ans = ans * a % mod;
		a = a * a % mod;
		n >>= 1;
	}
	return ans;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , q ; cin >> n >> q;
    	vector<int>a(n);
    	long long prod = 1 , sum = 0;
    	for(auto &i : a){
    		cin >> i;
    		prod *= (ll)i;
    		prod %= mod;
    		sum += prod;
    		sum %= mod;
    	}
    	int l , r; cin >> l >> r;
    	//cout<<sum<<endl;
    	long long ans = sum;
    	for(int i = 1 ; i < n;i++){
    		sum -= a[i-1];
    		sum += mod;
    		sum %=mod;
    		sum = (1ll * sum   * binpow(a[i-1]  , mod-2)) % mod;
    		ans += sum;
    		ans %= mod;
    	}
    	cout<<ans<<endl;
    }
    return 0;
}