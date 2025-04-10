#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > graph;
vector<bool>vis;
bool chk = false;

void dfs(int s , int d){
	vis[s] = true;
	if(s == d){
		chk = true;
		return;
	}
	if(chk) return;
	for(auto it = graph[s].begin();it != graph[s].end();it++){
		if(!vis[*it]){
			dfs(*it , d);
		}
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
   	//graph[v].push_back(u);
   }
   int s , d; cin >> s >> d;
   dfs(s , d);
   chk ? cout<<"found\n" : cout<<"have not found\n";

    return 0;
}