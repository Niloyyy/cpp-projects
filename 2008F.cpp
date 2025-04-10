#include<bits/stdc++.h>
#define int long long int
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
const int N = 2e5 + 9;
int a[N];


int iterative_binpow(int a , int n){
	a %= mod;
	int ans = 1;
	while(n){
		if(n & 1) ans = ans * a % mod;
		a = a * a % mod;
		n >>= 1;
	}
	return ans;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	for(int i = 1 ; i <= n;i++) cin >> a[i];
    	int suf[n+1] = {0}; suf[n] = a[n] % mod;
    	for(int i = n-1; i > 0;i--){
    		suf[i] = (suf[i+1] + a[i] + mod) % mod;
    	}
    	int sum = 0;
    	for(int i = 1 ; i <= n;i++){
    		sum += 1ll * a[i] * (suf[i] - a[i] + mod) % mod;
    		sum %= mod;
    	}
    	int x = n * (n - 1) / 2;
    	int ans = 1ll * sum * iterative_binpow(x , mod - 2) % mod;
    	cout<<ans % mod<<endl;
    }
    return 0;
}