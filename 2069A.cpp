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
    	n -= 2; 
    	vector<int>arr(n);
    	for(auto &i : arr) cin >> i;
    	bool f = 1;
    	for(int i = 0 ; i + 2 < n;i++){
    		if(arr[i] == 1 and arr[i+1] == 0 and arr[i+2] == 1){
    			f = 0;
    			break;
    		}
    	}	
    	cout<<(f ? "YES\n" : "NO\n");
    }
    return 0;
}