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
    	int n; cin >> n;
    	vector<pair<int,int>>tr;
    	for(int i = 0 ;i < n;i++){
    		int k , idx = 0 , mx = -1; cin >> k;
    		for(int j = 0 ; j < k;j++){
    			int x; cin >> x;
    			mx = max(x - j + 1 , mx);
    		}
    		tr.push_back({mx , k});
    	}
    	sort(tr.begin() , tr.end());
		int ans = tr[0].f;
		int64_t sum = tr[0].f + tr[0].s;
		for(int j = 1 ; j < tr.size();j++){
			if(sum < tr[j].f){
				ans += (tr[j].f - sum);
				sum += (tr[j].f - sum);
			}
			sum += tr[j].s;
		}
		cout<<ans<<endl;
    
    }
    return 0;
}