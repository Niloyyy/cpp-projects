#include<bits/stdc++.h>
using namespace std;
vector<int>dist;
vector< vector<int> > graph;
vector<bool>vis;

int main(){
    int n , e;
    cin >> n >> e;

    vis.assign(n+1 , false);
    graph.assign(n+1 , vector<int>() );
    dist.assign(n+1 , 1e9);

    for(int i = 0 ; i < e ;i++){
        int u , v;
        cin >> u >> v;
        graph[u].push_back(v);
        //if the graph is bidirected then-
        graph[v].push_back(u);
    }
    int src; cin >> src;
    dist[src] = 0;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int f = q.front();
        q.pop();
        for(auto it = graph[f].begin() ; it != graph[f].end();it++){
            if(dist[f] + 1 < dist[*it]){
                dist[*it] = 1 + dist[f];
                q.push(*it);
            }
        }
    }
    vector<int>ans(n , -1);
    for(int i = 0 ; i < n;i++){
        if(dist[i] != 1e9)
            ans[i] = dist[i];
    }
    for(auto it : ans) cout<<it<<" ";


    return 0;
}