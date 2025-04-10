#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define endl '\n'
#define f first
#define s second
using namespace std;
using namespace __gnu_pbds; 
const double PI = acos(-1);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;

int bin(vector<int>&a , int i){
	int l = i+1 , r = a.size()-1 , m , ans = 0;
	while(l <= r){
		m = l + (r - l) / 2;
		if(a[m] < a[i] + a[i+1]){
			ans = m;
			l = m + 1;
		}else{
			r = m - 1;
		}
	}
	return ans;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>a(n);
    	for(auto &i : a) cin >> i;
    	sort(a.begin() , a.end());
   		int ans = inf;
    	for(int i = 0 ; i + 1 < n;i++){
    		int x = bin(a , i);
    		ans = min(ans , n - (x - i + 1));
    	}
    	cout<<ans<<endl;
    }
    return 0;
}	
// 1 2 3 4 6 6 