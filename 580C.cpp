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
const int MAX = 1e5+9;
vector<bool>cat(MAX , false);
vector<int>g[MAX];
int n , m , ans;

void dfs(int c , int p , int cons , int mx_cons){
	
	if(cat[c]) cons++;
	else cons ^= cons;
	mx_cons = max(cons , mx_cons);
	bool child = false;
	for(auto u : g[c]){
		if(u != p){
			dfs(u , c , cons , mx_cons);
			child = true;
		}
	}
	if(!child and m >= mx_cons) ans++;

}

int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	cin >> n >> m;
    for(int i = 1 ; i <= n;i++){
    	bool x;
    	cin >> x;
    	cat[i] = x;
    }
    for(int i = 1 ; i < n;i++){
    	int u , v; cin >> u >> v;
    	g[u].push_back(v);
    	g[v].push_back(u);
    }
    dfs(1 , -1 , 0 , 0);
    cout<<ans;

    return 0;
}