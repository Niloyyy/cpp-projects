#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define LR(j , n) for(int i = j ; i <= n;i++)
#define RL(n , j) for(int i = n ; i >= j ;i--)
#define msb(n) __lg(n)
#define gcd(a , b) __gcd(a , b)
#define lcm(a , b) a * b / __gcd(a , b)
using namespace std;
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};
const int N = 1e5 + 9;
vector<int>graph[N];
vector<bool>vis(N);

bool dfs(int node , int par){
    vis[node] = true;
    for(auto child : graph[node]){
        if(!vis[child]){
            if(dfs(child , node )) return true;
        }else if(child != par){
            return true;
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , e; cin >> n >> e;
    for(int i = 0 ; i < e;i++){
        int u , v; cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i = 1 ; i <= n;i++){
        if(!vis[i]){
            if(dfs(i , -1)) cout<<"cycle found\n";
            else cout<<"not";
            return 0;
        }
    }

    return 0;
}