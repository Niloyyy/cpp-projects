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
    	int n; cin >> n;
    	map<pair<int,int>,bool>p;
    	vector<pair<int,int>>po;
    	for(int i = 0 ; i < n;i++){
    		int x , y; cin >> x >> y;
    		po.push_back({x ,y});
    		p[{x ,y}] = 1;
    	}
    	int64_t ans = 0;
    	for(int i = 0 ; i < po.size();i++){
    		int x = po[i].f , y = po[i].s;
    		if(p[{x , y+1}]) ans += (n-2);
    		if(y == 0 and p[{x+1 , 1}] and p[{x+2 , 0}]) ans++;
    		if(y == 1 and p[{x+1 , 0}] and p[{x+2 , 1}]) ans++;
    	}
    	cout<<ans<<endl;
    }
    return 0;
}