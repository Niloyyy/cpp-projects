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

long long GCD(long long x, long long y){
    if (y == 0) return x;
    return GCD(y, x%y);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<ll>v(n);
    	for(auto &i : v) cin >> i;
    		
    	ll g = llabs(v[1] - v[0]);
    	int ans = INT_MIN , l = 0;
        if((g == 1 and n == 2) or n == 1){
            cout<<1<<endl;
            continue;
        }
        int i;
    	for(i = 2 ; i < n;i++){
            //cout<<g<<endl;
            g = GCD(g , abs(v[i] - v[i-1]));
    		if(g == 1){
                //cout<<l<<' '<<i<<endl;
                ans = max(ans , i - l);
    			g = llabs(v[i] - v[i-1]);
                l = i-1;
                //i++;
    		}
            
    	}
        ans = max(ans , i-l);
    	cout<<ans<<endl;	
    
    }
    return 0;
}