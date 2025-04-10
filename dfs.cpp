#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > graph;
vector<bool>vis;

void dfs(int u){
	vis[u] = true;
	cout<<u<<" ";

	for(auto it = graph[u].begin() ; it != graph[u].end() ; it++){
		if(!vis[*it])
			dfs(*it);
	}	
	
}


int main(){
   int n , e;
   cin >> n >> e;
   vis.assign(n+1 , false);
   graph.assign(n+1 , vector<int>() );

   for(int i = 0 ; i < e;i++){
   	int u , v;
   	cin >> u >> v;
   	graph[u].push_back(v);
   	graph[v].push_back(u);
   }
   for(int i = 1 ; i <= n;i++){
   	if(!vis[i])
   		dfs(i);
   }
    return 0;
}