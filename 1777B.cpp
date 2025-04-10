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

int iterative_binpow(int a , int n , int m  = mod){
	int ans = 1;
	while(n){
		if(n & 1) ans = ans * a % m;
		a = a * a % m;
		n >>= 1;
	}
	return ans;
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int f[100001]; f[1] = 1;
    for(int i  = 2; i <= 100001;i++) f[i] = (1ll * f[i-1] * i) % mod;
    int tc = 1; cin >> tc;
    while(tc--){
    	ll n; cin >> n;
    	ll a = 1ll * (n * (n - 1) % mod);
    	ll ans = (a * f[n]) % mod;
    	cout<<ans<<endl;
    }
    return 0;
}