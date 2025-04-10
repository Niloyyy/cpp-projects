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

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , k; cin >> n >> k;
    	vector<int>arr(n) , h(n);
    	for(auto &x : arr) cin >> x;
    	for(auto &x : h) cin >> x;
    	if(n == 1){
    		if(arr[0] <= k) cout<<1<<endl;
    		else cout<<0<<endl;
    		continue;
    	}	
    	int64_t sum = arr[0];
    	int l = 0 , r = 0 , len = 0;
    	while(r + 1 < n){
    		if(h[r] % h[r+1] == 0 and sum + arr[r+1] <= k){
    			sum += arr[r+1];
    			r++;
    		}else if(h[r] % h[r+1]){
    			if(sum <= k) len = max(len , r - l + 1);
    			sum = arr[r+1];
    			l = r + 1;
    			r++;
    		}else if(sum + arr[r+1] > k){
    			if(sum <= k) len = max(len , r - l + 1);
    			sum -= arr[l++];
    			if(l == r){
    				r++;
    				sum += arr[r];
    			}
    		}
    	}
    	//cout<<l<<' '<<r<<endl;
    	if(r + 1 == n and l + 1 <=  n) len = max(len , r - l + 1);
    	if(len == 1 and *min_element(arr.begin() , arr.end()) > k) len = 0;
    	cout<<len<<endl;;
    
    }
    return 0;
}