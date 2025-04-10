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
    	int n , d , k; cin >> n >> d >> k;
    	ll a[n+2] = {0};
    	for(int i = 0 ; i < k;i++){
    		int l , r; cin >> l >> r;
    		l = max(0 , l - d + 1);
    		a[l]++ , a[r+1]--;
    	}
    	for(int i = 1 ; i <= n;i++){
    		a[i] += a[i-1];
    	}
    	for(int i = 1 ; i <= n;i++) cout<<a[i]<<' ';	
    	long long br = LLONG_MIN , mr = LLONG_MAX;
    	int m = 1e6, b = 1e6;
    	for(int i = d ; i <= n;i++){
    		if(br < a[i-d+1]){
    			b = i - d + 1;
    			br = a[i-d+1];
    		}
    		if(mr > a[i-d+1]){
    			m = i - d  + 1;
    			mr = a[i-d+1];
    		}
    	}
    	   cout<<b<<' '<<m<<endl;	
    
    }
    return 0;
}