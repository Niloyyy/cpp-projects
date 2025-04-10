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
#define pii  pair<int,int>
#define f first 
#define s second
using namespace std;
const int mod = 1e9 + 7;
int dr[] = {+2 , +0 , -2 , +0};
int dc[] = {+0 , -2 , +0 , +2};
int d_side[] = {1,-1};


int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}



int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	string u , v; cin >> u >> v;
    	vector<vector<int>>level(8 , vector<int>(8 , 0));
    	bool vis[8][8] = {false};
    	queue<pii>q;
		q.push({u[0]-'a',u[1]-'1'});
		
		while(!q.empty()){
			int r = q.front().f;
			int c = q.front().s;
			vis[r][c] = 1;
			q.pop();
			for(int i = 0 ;i < 4;i++){
				for(int j = 0 ; j < 2;j++){
					int nr , nc;
					if(dr[i]){
						nr = r + dr[i];
						nc = c + d_side[j];
					}else{
						nr = r + d_side[j];
						nc = c + dc[i];
					}
					if(nr >= 0 and nr < 8 and nc >= 0 and nc < 8 and !vis[nr][nc] and level[nr][nc] == 0){
						vis[nr][nc] = 1;
						level[nr][nc] = level[r][c] + 1;
						q.push({nr , nc});	
					}
				}
			}
		}
    	
    	cout<<level[v[0]-'a'][v[1]-'1'];
    	if(tc) cout<<endl;	
    }
    return 0;
}

