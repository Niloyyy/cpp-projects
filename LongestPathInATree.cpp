#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 2e5 + 9;
vector<int>g[N];
vector<bool>vis(N);
int ans = -1e9;

void dfs(int v , int len){
	vis[v] = 1;
	len++;
	ans = max(len , ans);
	for(auto u : g[v]){
		if(!vis[u]){
			dfs(u , len);
		}
	}
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for(int i = 1 ; i < n;i++){
    	int u , v; cin >> u >> v;
    	g[u].push_back(v);
    	g[v].push_back(u);
    }
    for(int i = 1 ; i <= n;i++){
    	if(g[i].size() == 1){
    		int len = 0;
    		dfs(i , len);
    		break;
    	}
    }
    cout<<ans;
    return 0;
}