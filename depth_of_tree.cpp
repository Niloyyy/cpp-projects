#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e5+9;
vector<int>g[N];
int depth[N] , height[N];

void dfs(int par){
	for(auto child : g[par]){
		depth[child] = depth[par] + 1;
		dfs(child);
		height[par] = max(height[child] + 1 , height[par]);
	}

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int node , edge; cin >> node >> edge;
    for(int i = 0 ;i < edge;i++){
    	int u , v; cin >> u >> v;
    	g[u].push_back(v);
    }
    dfs(1);
    cout<<height[1];

    return 0;
}