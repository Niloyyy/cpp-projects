#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define int long long int
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
    	int n , x; cin >> n >> x;
    	vector<int>arr(n);
    	for(int i = 0 ; i < n;i++){
    		cin >> arr[i];
    	}
    	//sort(arr.begin() , arr.end());
    	int l = 1 , h = 2e9 , m , ans = 0;
    	while(l <= h){
    		m = l + (h - l) / 2;
    		int sum = 0;
    		for(int i = 0 ; i < n;i++){
    			if(arr[i] < m) sum += (m - arr[i]);
    		}
    		if(sum <= x){
    			ans = max(ans , m);
    			l = m + 1;
    		}else{
    			h = m - 1;
    		}
    	}
    	n == 1 ? cout<<x+arr[0]<<endl : cout<<ans<<endl;
    
    }
    return 0;
}