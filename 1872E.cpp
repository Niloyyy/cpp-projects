#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
const int N = 1e5 + 9;
int a[N] , xo[N] , xz[N];


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	int tot_xr = 0;
    	for(int i = 1 ; i <= n;i++){
    		cin >> a[i];
    		tot_xr ^= a[i];
    	}
    	string s; cin >> s;
    	int x = 0 , y = 0;
    	for(int i = 1 ; i <= n;i++){
    		if(s[i-1] == '0'){
    			y ^= a[i];
    			xz[i] = y;
    			xo[i] = x;
    		}else{
    			x ^= a[i];
    			xo[i] = x;
    			xz[i] = y;
    		}
    	}
    	int q; cin >> q;
    	while(q--){
    		int tp ; cin >> tp;
    		if(tp == 1){
    			int l , r; cin >> l >> r;
    			x ^= xo[r] ^ xo[l-1] ^ xz[r] ^ xz[l-1];
    			y = tot_xr ^ x;
    		}else{
    			int g; cin >> g; 
    			g == 1 ? cout<<x<<' ' : cout<<y<<' ';
    		}
    	}
    	cout<<endl;
    }
    return 0;
}