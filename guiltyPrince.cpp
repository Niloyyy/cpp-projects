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
int n , m;
int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

void dfs(int sr , int sc , vector<vector<char>>grid , vector<vector<bool>> &vis){
	vis[sr][sc] = true;
	for(int i = 0 ; i < 4;i++){
		int nr = sr + dr[i];
		int nc = sc + dc[i];
		if(nr >= 0 and nr < n and nc >= 0 and nc < m and !vis[nr][nc] and grid[nr][nc] != '#'){
			vis[nr][nc] = true;
			dfs(nr , nc , grid , vis);
		}
	}
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    for(int i = 1 ; i <= tc;i++){
    	int sr , sc; cin >> n >> m;
    	vector< vector<char> > grid(n  , vector<char>(m));
    	vector< vector<bool> > vis(n  , vector<bool>(m , false));
    	for(int i = 0 ; i < n;i++){
    		for(int j = 0 ; j < m;j++){
    			cin >> grid[i][j];
    			if(grid[i][j] == '@'){
    				sr = i;
    				sc = j;
    				vis[i][j] = true; 
    			}
    		}
    	}
    	dfs(sr , sc , grid , vis);
    	int ans = 0;
    	for(int i = 0 ; i < n;i++){
    		for(int j = 0 ; j < m;j++){
    			if(vis[i][j]) ans++;
    			cout<<vis[i][j];
    		}
    		cout<<endl;
    	}
    	//cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}