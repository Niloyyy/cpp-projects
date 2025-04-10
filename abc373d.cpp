#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int N = 2e5 + 9;
int ans[N];
vector<pair<int ,int>>g[N];
vector<bool> vis(N , false);


void bfs(int s , int init){
    queue<int> q;  
    vis[s] = true;
    ans[s] = init;
    q.push(s);
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (auto &[u , w] : g[curr]) {
            if (!vis[u]) {
                vis[u] = true;
                ans[u] = ans[curr] + w;
                q.push(u);
            }
        }
    }
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n , m; cin >> n >> m;
    
    for(int i = 0 ; i < m;i++){
    	int u , v , w; cin >> u >> v >> w;
    	g[u].push_back({v , w});
    	g[v].push_back({u , -w});
    }
    for(int i = 1 ; i <= n;i++){
    	if(!vis[i]) bfs(i , 0);
    }
    for(int i = 1 ; i <= n;i++) cout<<ans[i]<<' ';

    return 0;
}