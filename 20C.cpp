#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int
#define endl '\n'
#define f first
#define s second
using namespace std;
using namespace __gnu_pbds; 
const double PI = acos(-1);
const int mod = 1e9 + 7;
const int64_t inf = LLONG_MAX;
using pii = pair<int64_t , int>;
using tup = tuple<int64_t , int , vector<int>>;
using minheap = priority_queue< pii , vector<pii> , greater<pii>>;

const int N = 1e5 + 5;
vector<pii>g[N];
vector<int64_t>dist(N , inf);

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int n , m; cin >> n >> m;
    for(int i = 0 ; i < m;i++){
        int u , v , w; cin >> u >> v >> w;
        g[u].push_back({v , w});
        g[v].push_back({u , w});
    }
    dist[1] = 0;
    minheap q;
    q.push({0 , 1});
    vector<int> path(N , 0);
    while(!q.empty()){
        pii top = q.top();
        q.pop();
        int64_t dis = top.f;
        int node = top.s;
        for(auto it : g[node]){
            int new_node = it.f;
            int64_t new_wt = it.s;
            if(new_wt + dis < dist[new_node]){
                dist[new_node] = new_wt + dis;
                q.push({dist[new_node] , new_node});
                path[new_node] = node;
            }
        }
    }
    if(dist[n] == inf) cout<<-1;
    else{
        int cur = n;
        vector<int>ans;
        while(cur){
            ans.push_back(cur);
            cur = path[cur];
        }
        reverse(ans.begin() , ans.end());
        for(auto i : ans) cout<<i<<' ';
    }

    return 0;
}