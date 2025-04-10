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
const int N = 55;
vector<vector<int>>g(N , vector<int>(N));
vector<vector<bool>>v(N , vector<bool>(N));

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , m; cin >> n >> m;
    	for(int i = 1 ; i <= n;i++){
    		string s; cin >> s;
    		for(int j = 1 ; j <= m;j++){
    			g[i][j] = (s[j-1] - '0');
    		}
    	}
    	
    	for(int i = 1 ; i <= n;i++){
    		if(g[i][1]){
    			v[i][1] = 1;
    			for(int j = 2 ; j <= m;j++){
    				if(g[i][j]) v[i][j] = 1;
    				else break;
    			}
    		}
    	}

    	for(int i = 1 ; i <= m;i++){
    		if(g[1][i]){
    			v[1][i] = 1;
    			for(int j = 2 ; j <= n;j++){
    				if(g[j][i]) v[j][i] = 1;
    				else break;
    			}
    		}
    	}
    	bool f = 1;
    	for(int i = 1 ; i <= n;i++){
    		for(int j = 1 ;j <= m;j++){
    			f &= (g[i][j] == v[i][j]);
    		}
    	}

    	cout<<(f ? "YES\n" : "NO\n");
    	for(int i = 1 ; i <= n;i++){
    		for(int j = 1 ;j <= m;j++){
    			g[i][j] = 0;
    			v[i][j] = 0;
    		}
    	}
    }
    return 0;
}