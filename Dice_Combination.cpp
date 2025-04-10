#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e6 + 9;
const int mod = 1e9 + 7;
int dp[N];

int fun(int n){
	if(n == 0) return 1;
	if(dp[n]) return dp[n] % mod;
	int x = 0;
	for(int i = 1 ; i <= 6;i++){
		if(n - i >= 0){
			x += fun(n - i);
			x %= mod;
		}
	}
	return dp[n] = x % mod;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    cout<<fun(n);
 
    return 0;
}