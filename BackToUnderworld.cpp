#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define f first
#define s second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;
const int N = 2e4 + 9;
vector<int>g[N] , clr(N);
vector<bool>vis(N);

void reset(){
    for(int i = 0 ; i < N;i++){
        g[i].clear();
        vis[i] = 0;
        clr[i] = 0;
    }
}

void dfs(int v , int c , vector<int>&ret){
    ret.push_back(v);
    vis[v] = 1;
    clr[v] = c;
    for(auto u : g[v]){
        if(!vis[u]){
            dfs(u , c == 2 ? 3 : 2 , ret);
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1 , t = 0; cin >> tc;
    while(tc > t++){
        reset();
    	int n; cin >> n;
        map<int,bool>mp;
        for(int i = 0 ; i < n;i++){
            int u , v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
            mp[u] = 1;
            mp[v] = 1;
        }
        int ans = 0;
    	for(int i = 1 ; i < N;i++){
            if(!vis[i] and mp[i]){
                vector<int>node;
                dfs(i , 2 , node);
                int tw = 0 , th = 0;
                for(auto i : node){
                    clr[i] == 2 ? tw++ : th++;
                }
                ans += max(tw , th);
            }
        }
    	cout<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}