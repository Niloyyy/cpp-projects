#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5+9;
vector<int>g[N];
vector<int>val(N) , pre(N);

ll dfs(int par){
    if(g[par].empty()) return pre[par] = val[par];
    ll tot = 0;
	for(auto child : g[par]){
		tot += dfs(child);
	}
    return pre[par] = tot + val[par];
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int node , edge; cin >> node >> edge;
    for(int i = 0 ;i < edge;i++){
    	int u , v; cin >> u >> v;
    	g[u].push_back(v);
        val[u] = u;
        val[v] = v;
    }
    dfs(1);
    return 0;
}