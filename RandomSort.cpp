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
const int mod = 7901;
const int inf = INT_MAX;
const int _inf = INT_MIN;

vector<int>fact(1005);

void pre(){
	fact[0] = 1;
	for(int i = 1 ; i < 1005;i++){
		fact[i] = 1ll * fact[i-1] * i;
		fact[i] %= mod;
	}
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	pre();
    	int n; cin >> n;
    	vector<int>a(n);
    	map<int,int>mp;
    	for(auto &i : a){
    		cin >> i;
    		mp[i]++;
    	}
    	int ans = 1;
    	for(auto i : mp){
    		ans *= fact[i.s];
    		ans %= mod;
    	}
    	cout<<ans<<endl;
    }
    return 0;
}