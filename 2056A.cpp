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
using pii = pair<int , int>;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int m , n; cin >> n >> m;
    	vector<pii>po(n);
    	for(int i = 0 ; i < n;i++){
    		int x , y; cin >> x >> y;
    		po[i] = {x , y};
    	}
    	for(int i = 1 ; i < n;i++){
    		po[i].f += po[i-1].f;
    		po[i].s += po[i-1].s;
    	}
    	int64_t area = 4 * m;
    	for(int i = 1 ; i < n;i++){
    		int x2 = po[i].f , y2 = po[i].s;
    		int x1 = po[i-1].f , y1 = po[i-1].s;
    		area += 4 * m;
    		if(x1 + m >= x2 and y1 + m >= y2){
    			area -= 2 * (abs(x1 + m - x2) + abs(y1 + m - y2));
    		}
    	}
    	cout << area <<endl;
    
    }
    return 0;
}