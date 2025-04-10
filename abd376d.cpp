#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 2e5 + 9;
vector<int>g[N];
vector<bool>vis(N) , path(N);
int ed;
int ans = INT_MAX;

void dfs(int u){
	
	vis[u] = 1;
	path[u] = 1;
	for(auto it : g[u]){
		ed++;
		if(!path[it] )dfs(it);
	}
	path[u] = 0;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n , m; cin >> n >> m;
    for(int i = 0 ; i < m;i++){
    	int u , v; cin >> u >> v;
    	g[u].push_back(v);
    }
    dfs(1);
    cout<<ans;

    return 0;
}