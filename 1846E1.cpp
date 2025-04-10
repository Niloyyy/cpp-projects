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
const int _inf = INT_MIN;

int binpow(int a , int n){
	int ans = 1;
	while(n){
		if(n & 1) ans = ans * a;
		a = a * a;
		n >>= 1;
	}
	return ans;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	bool f = 0;
    	for(int i = 2 ; i <= sqrt(n + 1);i++){
    		for(int po = 0 ; po <= 20 ;po++){
    			if(1ll * n * (i - 1) == 1ll * (binpow(i , po+1) - 1) and n / i > 1){
    				f = 1; 
    				break;
    			}
    		}
    	}
    	cout<<(f ? "YES\n" : "NO\n");
    }
    return 0;
}