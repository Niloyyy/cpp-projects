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

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int m , a , b , c , ans , rem; cin >> m >> a >> b >> c;
    	if(m >= a and m >= b){
    		rem = m - a + m - b;
    		ans = b + a + min(c , rem);
    	}else if(m < a and m < b){
    		ans = m + m;
    	}else if(m <= a and m >= b){
    		rem = m - b;
    		ans = m + b + min(c , rem);
    	}else if(m >= a and m <= b){
    		rem = m - a;
    		ans = m + a + min(rem , c);
    	}else{
    		ans = a + b;
    	}
    	cout<<ans<<endl;
    }
    return 0;
}