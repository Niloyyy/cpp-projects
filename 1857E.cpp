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
const int inf = INT_MAX;
const int _inf = INT_MIN;
const int N = 2e5 + 9;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>a(n) , b(n); 
    	vector<long long>pre(n+1 , 0);
    	for(int i = 0 ; i < n;i++) cin >> a[i];
    	b = a;
    	sort(b.begin() , b.end());
    	for(int i = 1 ; i <= n;i++) pre[i] = pre[i-1] + b[i-1];
    	map<int , long long>ans;
    	for(int i = 0 ; i < n;i++){
    		int x = b[i];
    		ans[x] = 1ll * (1ll * x * (i + 1) - pre[i+1] + pre[n] - pre[i+1] - 1ll * (n - i - 1) * x + n);
    	}
    	for(int i = 0 ; i < n;i++){
    		cout<<ans[a[i]]<<" \n"[i==n-1];
    	}	
    }
    return 0;
}