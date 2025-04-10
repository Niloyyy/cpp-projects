#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e5 + 5;
vector<pair<int,int>>g[N];
vector<int64_t>dist(N , LLONG_MAX);

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int n , m , s , t; cin >> n >> m >> s >> t;
    for(int i = 0 ; i < m;i++){
    	int u , v , w; cin >> u >> v >> w;
    	g[u].push_back({v , w});
    	//g[v].push_back({u , w});
    }
    priority_queue<pair<int64_t,int64_t> , vector<pair<int64_t,int64_t>> , greater<pair<int64_t,int64_t>>>pq; 
    pq.push({0 , 0});
    dist[s] = 0;
    while(!pq.empty()){
    	auto e = pq.top();
    	pq.pop();
    	int64_t dis = e.first;
    	int node = e.second;
    	if(dist[node] != dis) continue;
    	for(auto it : g[node]){
    		int wt = it.second;
    		int nod = it.first;
    		if(dist[node] + wt < dist[nod]){
    			dist[nod] = dist[node] + wt;
    			pq.push({dist[nod] , nod});
    		}
    	}
    }
    for(int i = 1 ; i <= n;i++) cout<<dist[i]<<' ';
    return 0;
}