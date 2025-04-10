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

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; //cin >> tc;
    while(tc--){
    	int k1 , k2 , n; cin >> n >> k1 >> k2;
    	int a[n] , b[n];
    	priority_queue<int>pq;
    	for(int i = 0 ; i < n;i++){
    		cin >> a[i];
    	}
    	for(int i = 0 ; i < n;i++){
    		cin >> b[i];
    		pq.push(abs(a[i]-b[i]));
    	}
    	int x = k1 + k2;
    	while(x--){
    		int e = pq.top();
    		pq.pop();
    		pq.push(abs(e-1));
    	}
    	long long ans = 0;
    	while(!pq.empty()){
    		int e = pq.top();
    		ans += 1ll * e * e;
    		pq.pop();
    	}
    	cout<<ans<<endl;
    }
    return 0;
}