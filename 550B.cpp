#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define F first
#define S second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int n , l , r , x; cin >> n >> l >> r >> x;
    int c[n] , cnt = 0;
    for(int i = 0 ; i < n;i++) cin >> c[i];
    for(int v = 0 ; v <= (1<<n) - 1;v++){
    	int tot = 0 , mn = INT_MAX , mx = INT_MIN;
    	for(int bit = 0 ; bit < n;bit++){
    		if(v&(1<<bit)){
    			tot += c[bit];
    			mn = min(mn , c[bit]);
    			mx = max(mx , c[bit]);
    		}
    	}
    	if(tot >= l and tot <= r and mx - mn >= x) cnt++;
    }
    cout<<cnt;	
    return 0;
}