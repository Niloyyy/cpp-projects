#include<bits/stdc++.h>

using namespace std;

vector <int> adj[10];
int vis[10], dis[10], parent[10];

int bfs(int s, int d)
{
    queue <int> q;
    q.push(s);
    vis[s] = 1;
    dis[s] = 0;
    parent[s] = -1;
    while(!q.empty())
    {
        int frnt = q.front();
        q.pop();
        for(int i=0;i<adj[frnt].size();i++)
        {
            int child = adj[frnt][i];
            if(!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                dis[child] = dis[frnt] + 1;
                //parent[child] = frnt;
                if(child == d)
                    return dis[d];
            }
        }
    }
    return -1;
}

int main()
{
    int edge;
    cin>>edge;
    for(int i=1;i<=edge;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int start,dest;
    cin>>start>>dest;
    for(int i=0;i<10;i++)
    {
        vis[i] = 0;
        dis[i] = -1;
        parent[i] = -1;
    }
    int cost = bfs(start,dest);
    // stack <int> path;
    // int now = dest;
    // while(now != -1)
    // {
    //     path.push(now);
    //     now = parent[now];
    // }
    // while(!path.empty())
    // {
    //     cout<<path.top()<<" ";
    //     path.pop();
    // }
    // cout<<endl;
    cout<<cost<<endl;
}
