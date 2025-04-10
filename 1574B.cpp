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

    int tc = 1 , t = 0; cin >> tc;
    while(tc--){
    	int a , b , c , m; cin >> a >> b >> c >> m;
    	int mx = a + b + c - 3;
    	int mm = min({a , b , c});
    	a -= mm , b -= mm , c -= mm;
    	int mn = max({a , b , c}) - (a + b + c - max({a , b , c}) - min({a , b , c})) - (mm + 1);
    	cout<<( (m >= mn and m <= mx) ? "YES\n" : "NO\n");
    }
    return 0;
}	