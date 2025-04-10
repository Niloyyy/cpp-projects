#include <bits/stdc++.h>
using namespace std;
vector< vector<int> >adj;
vector<int>vis;
vector<int>dist;

int dfs(int s , int d)
{

    queue<int>q;
    q.push(s);
    vis[s] = true;
    dist[s] = 0;

    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        for(auto it = adj[f].begin();it != adj[f].end();it++)
        {
            if(!vis[*it])
            {
                vis[*it] = true;
                q.push(*it);
                dist[*it] = dist[f] + 1;
                if(*it == d)
                return dist[d];
            }
        }
    }
    return -1;
}

int main()
{
    int n , e; cin >> n >> e;

    adj.assign(n+1 , vector<int>() );
    vis.assign(n+1 , false);
    dist.assign(n+1 , 1e9);

    for(int i = 0 ; i < e;i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int s , d; 
    cin >> s >> d;
    int cost = dfs(s , d);
    cout<<cost;

}