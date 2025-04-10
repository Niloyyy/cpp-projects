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
    	vector<pair<int,int>>v(n+1);
    	map<int , int>ans;
    	priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>pq;
    	for(int a = 1 ; a <= n;a++){
    		int b; cin >> b;
    		int x , y;
    		if(b == 0){
    			x = a + 1;
    			y = n;
    		}else{
    			x = a / (b + 1) + 1;
    			y = a / b;
    			pq.push({y - x , a});
    		}
    		v[a] = {x , y};
    		assert(x >= 1 or y <= n);
    	}
    	vector<bool>vis(n+1 , 1);
    	while(pq.empty() == false){
    		auto e = pq.top();
    		pq.pop();
    		int x = v[e.s].f , y = v[e.s].s;
    		for(int it = x ; it <= y;it++){
    			if(vis[it]){
    				ans[e.s] = it;
    				vis[it] = 0;
    				break;
    			}
    		}
    	}
    	priority_queue<int, vector<int> , greater<int>>rest;
    	for(int i = 1 ; i <= n;i++){
    		if(vis[i]){
    			rest.push(i);
    		}
    	}
    	for(int i = 1 ; i <= n;i++){
    		if(ans[i] == 0){
    			int x = rest.top();
    			rest.pop();
    			cout<<x<<' ';
    		}else cout<<ans[i]<<' ';
    	}
    	cout<<endl;
    	
    }
    return 0;
}