#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
#define int long long
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

int c(int x , int y){
	if(x % y) return x / y + 1;
	return x / y;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , k; cin >> n >> k;
    	vector<int>v(n);
    	int sum = 0 , mx = 0 , ans = 0;
    	for(auto &u : v){
    		cin >> u;
    		sum += u; 
    		mx = max(mx , u);
    	}
    	for(int i = 0 ; i < n;i++){
    		if( (sum + k) / (i+1) >= mx and (c(sum , (i + 1)) * (i+1) ) % sum <= k) ans = i+1;
    	}	
    	cout<<ans<<endl;
    }
    return 0;
}