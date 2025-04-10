#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > graph;
vector<bool>vis;
stack<int>topsort;

void dfs(int u){
  vis[u] = true;
  for(auto it = graph[u].begin() ; it != graph[u].end();it++){
    if(!vis[*it]){
      dfs(*it);
    }
  }
  topsort.push(u);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , e; cin >> n >> e;
    vector<int>indegree(e , 0);
    graph.assign(n , vector<int>() );
    vis.assign(n , false);

    for(int i = 0 ;i < e;i++){
      int u , v;
      cin >> u >> v;
      graph[u].push_back(v);
      //graph[v].push_back(u);
      indegree[v]++;
    }

    for(int i = 0 ; i < n;i++){
      if(!indegree[i]){
        dfs(i);
        break;
      }
    }

    while(!topsort.empty()){
      cout<<topsort.top()<<" ";
      topsort.pop();
    }
  
    return 0;
}