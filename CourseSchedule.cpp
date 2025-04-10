#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e4 + 5;
vector<int>g[N];
vector<int>vis(N);
vector<int>indeg(N);

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n , m; cin >> n >> m;
    for(int i = 0 ; i < m;i++){
    	int u , v; cin >> u >> v;
    	g[u].push_back(v);
    }
    for(int i = 1 ; i <= n;i++){
    	for(auto u : g[i]){
    		indeg[u]++;
    	}
    }
    queue<int>q;
    for(int i = 1 ; i <= n;i++){
    	if(indeg[i] == 0) q.push(i);
    }
    vector<int>ans;
    while(!q.empty()){
    	int u = q.front();
    	q.pop();
    	ans.emplace_back(u);
    	for(auto v : g[u]){
    		indeg[v]--;
    		if(indeg[v] == 0) q.push(v);
    	}
    }
    if(ans.size() < n) cout<<"Sandro fails.";
    else for(auto i : ans) cout<<i<<' ';
    return 0;
}