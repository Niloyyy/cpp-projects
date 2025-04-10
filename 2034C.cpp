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
const int inf = INT_MAX;
const int _inf = INT_MIN;
const int N = 1001 , M = 1001;
vector<vector<char>>g(N , vector<char>(M));
vector<vector<bool>>vis(N , vector<bool>(M , 0));

bool invalid(int i , int j , int n , int m){
	return (i < 0 or j < 0 or i >= n or j >= m);
}

void dfs(int i , int j , int n , int m){
	if(invalid(i , j , n , m)) return;
	vis[i][j] = 1;
	if(g[i][j] == 'L' and !vis[i][j]) dfs(i , j - 1 , n , m);
	else if(g[i][j] == 'R' and !vis[i][j]) dfs(i , j + 1 , n , m);
	else if(g[i][j] == 'U' and !vis[i][j]) dfs(i - 1 , j , n , m);
	else if(g[i][j] == 'D' and !vis[i][j]) dfs(i + 1 , j , n , m);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , m; cin >> n >> m;
    	for(int i = 0 ; i < n;i++){
    		for(int j = 0 ; j < m;j++) cin >> g[i][j];
    	}
    	for(int i = 0 ; i < n;i++){
    		for(int j = 0 ; j < m;j++){
    			if(!vis[i][j]) dfs(i , j , n , m);
    		}
    	}
    	for(int i = 0 ; i < n;i++){
    		for(int j = 0 ; j < m;j++){
    			cout<<vis[i][j]<<' ';    			
    		}
    		cout<<endl;
    	}

    }
    return 0;
}