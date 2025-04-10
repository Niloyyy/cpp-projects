#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	int p[n+1] , ans[n+1] , visit[n+1] = {0};
    	for(int i = 1 ; i <= n;i++) cin >> p[i];
    	string s; cin >> s;
    	for(int i = 1 ; i <= n;i++){
    		int sz = 0;
    		while(!visit[i]){
    			visit[i] = 1;
    			sz += (s[i-1] == '0');
    			i = p[i]; 
    		}
    		while(visit[i] != 2){
    			visit[i] = 2;
    			ans[i] = sz;
    			i = p[i];
    		}
    	}
    	for(int i = 1 ; i <= n;i++) cout<<ans[i]<<' ';
    	cout<<endl;	
    }
    return 0;
}