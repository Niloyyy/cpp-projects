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
const int N = 2e5 + 5;
vector< set<int> > g(N);
vector<bool>vis(N);

void dfs(int u){
	vis[u] = 1;
	for(auto i : g[u]){
		if(!vis[i]){
			dfs(i);
		}
	}
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	for(int i = 0 ; i + 1 < n;i++){
    		int u , v; cin >> u >> v;
    		g[u].insert(v);
    		g[v].insert(u);
    	}
    	int mx = -1 , m1 = 0 , m2 = 0;
    	for(int i = 1 ; i <= n;i++){
    		if(mx < (int)g[i].size()){
    			m1 = i;
    			mx = (int)g[i].size();
    		}
    	}
    	// cout<<m1;
    	for(auto it : g[m1]){
    		g[it].erase(m1);
    	}
    	g[m1].clear();
    	vis[m1] = 1;
    	mx = -1;
    	//cout<<m;
    	for(int i = 1 ; i <= n;i++){
    		if(mx < (int)g[i].size() and i != m1){
    			mx = (int)g[i].size();
    			m2 = i;
    		}
    	}
    	//cout<<m2;
    	for(auto it : g[m2]){
    		g[it].erase(m2);
    	}
    	g[m2].clear();
    	vis[m2] = 1;
    	//cout<<m2;
    	int cnt = 0;
    	for(int i = 1 ; i <= n;i++){
    		if(!vis[i]){
    			dfs(i);
    			cnt++;
    		}
    	}
    	cout<<cnt<<endl;
    	for(int i = 0 ; i < N;i++){
    		g[i].clear();
    		vis[i] = 0;
    	}
    }
    return 0;
}