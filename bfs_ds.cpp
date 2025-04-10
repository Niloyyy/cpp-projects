#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > graph;
vector<bool>vis;

void bfs(int u){
    queue<int>q;
    q.push(u);
    vis[u] = true;

    while(!q.empty()){

        int f = q.front();
        q.pop();
        cout << f <<" ";

        for(auto it = graph[f].begin() ; it != graph[f].end();it++){
           if(!vis[*it]){
             q.push(*it);
             vis[*it] = true;
           }
        }
    }
}



int main(){
    int n , e;
    cin >> n >> e;

    vis.assign(n+1 , false);
    graph.assign(n , vector<int>() );

    for(int i = 0 ; i < e ;i++){
        int u , v , w;
        cin >> u >> v >> w;
        graph[u].push_back(v);
        //if the graph is bidirected then-
        //graph[v].push_back(u);
        graph[u][v] = w;
    }

    for(int i = 1 ; i <= n;i++){
        if(!vis[i]){
            bfs(i);
        }
    }

    return 0;
}