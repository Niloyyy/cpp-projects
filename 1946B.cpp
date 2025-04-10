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

int64_t binpow(int64_t a , int64_t n){
	int64_t res = 1;
	while(n){
		if(n&1) res = (res * a) % mod;
		a = (a * a) % mod; 
		n >>= 1;
	}
	return res;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int64_t n , k; cin >> n >> k;
    	int64_t sum = 0 , mx_sum = INT_MIN , s = 0;
    	for(int i = 0 ; i < n;i++){
    		int64_t x; cin >> x;
    		s += x;
    		sum += x;
    		mx_sum = max({s , mx_sum , 0ll});
    		if(s < 0) s = 0;
    	}
    	cout<<((sum + mod) % mod + 1ll * ((mx_sum + mod) % mod * binpow(2ll , k) - (mx_sum + mod) % mod) % mod + mod) % mod<<endl;
    }
    return 0;
}