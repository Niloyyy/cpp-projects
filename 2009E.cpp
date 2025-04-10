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

    int tc = 1; cin >> tc;
    while(tc--){
    	int64_t n , k; cin >> n >> k;
    	int64_t mn = k , mx = n + k - 1;
    	int64_t l = mn , r = mx , m , rp , lp , ans = inf;
    	while(l <= r){
    		m = l + (r - l) / 2;
    		lp = m * (m + 1) / 2 - mn * (mn - 1) / 2;
    		rp = mx * (mx + 1) / 2 - m * (m + 1) / 2;
    		if(lp == rp){
    			ans = 0;
    			break;
    		}
    		if(rp > lp){
    			ans = min(ans , abs(rp-lp));
    			l = m + 1;
    		}
    		else{
    			r = m - 1;
    			ans = min(ans , abs(rp-lp));
    		}
    	}
    	cout<<ans<<endl;
    }
    return 0;
}