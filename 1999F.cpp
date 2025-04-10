#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define int long long int
#define endl '\n'
#define f first
#define s second
using namespace std;
using namespace __gnu_pbds; 
const double PI = acos(-1);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int N = 2e5 + 9;
int fact[N];

void pre(){
	fact[0] = 1;
	for(int i = 1 ; i < N;i++){
		fact[i] = 1ll * i * fact[i-1];
		fact[i] %= mod;
	}
}

int inv(int a , int n = mod - 2 , int m = mod){
	int ans = 1;
	while(n){
		if(n & 1) ans = ans * a % m;
		a = a * a % m;
		n >>= 1;
	}
	return ans;
}

int ncr(int n , int r){
	int res = 1;
	for(int i = 0 ; i < min(r , n - r);i++){
		res *= (n - i);
		res %= mod;
		res *= inv(i + 1);
		res %= mod;
	}
	return res;
}


int solve(){
	int n , k; cin >> n >> k;
    int z = 0 , o = 0;
    for(int i = 0 ; i < n;i++){
    	int x; cin >> x;
    	o += x;
    }
    z = n - o;
    if(k / 2 >= o){
    	return 0;
    }
    int ans = 0;
    for(int i = 0 ; i <= min(k / 2 , z);i++){
    	int x = fact[o] * fact[z];
    	x %= mod;
    	int r = k - i;
    	int y = inv(fact[r]) * inv(fact[o-r]);
    	y %= mod;
    	y *= inv(fact[i]) * inv(fact[z-i]);
    	y %= mod;
    	ans += (x * y) % mod;
    	ans %= mod;
    }
    return ans;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    pre();
    int tc = 1; cin >> tc;
    while(tc--){
    	cout<<solve()<<endl;
    }
    return 0;
}