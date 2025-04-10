#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int
#define endl '\n'
#define f first
#define s second
using namespace std;
using namespace __gnu_pbds; 
const double PI = acos(-1);
const int mod = 1e9 + 7;
const int N = 1e6 + 5;
const int inf = INT_MAX;
vector<int64_t>dp;
vector<int>c;
int n , x;

int64_t fun(int sum , int s){
	if(s >= n) return 0;
	if(sum == 0) return 1;
	if(dp[sum] != -1) return dp[sum];
	int64_t ans = 0;
	for(int i = s ; i < n;i++){
		if(sum - c[i] >= 0){
			ans = (ans + fun(sum-c[i] , i+1)) % mod;
			ans %= mod;
		}
		ans %= mod;
	}
	return dp[sum] = ans;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> x;
    dp.resize(x+1 , -1);
    c.resize(n);
    for(auto i = 0 ; i < n;i++) cin >> c[i];
    cout<<fun(x , 0);	

    return 0;
}