#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
//#define int long long
const int N = 1e5 + 9;
int a[N] , dp[N];
int n , k;	

int fun(int s){
	if(s == 1) return 0;
	if(dp[s] != -1) return dp[s];
	int call = 2e9;
	for(int i = 1 ; i <= k;i++){
		//if(dp[s-i] != -1) call = min(call , dp[s-i] + abs(a[s] - a[s-i]));
		if(s > i) call = min(call , fun(s - i) + abs(a[s] - a[s-i]));


	}
	return dp[s] = call;	
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    memset(dp , -1 , sizeof(dp));
    cin >> n >> k;
    for(int i = 1 ; i <= n;i++) cin >> a[i];
    cout<<fun(n);	
    
    return 0;
}