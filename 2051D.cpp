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


int lb(vector<int>&v , int i ,  int target , int x , int y){
	int l = 0 , h = i , ans = -1;
	while(h >= l){
		int m = l + (h - l) / 2;
		if(target - v[m] > y) h = m - 1;
		if(target - v[m] >= x and target - v[m] <= y){ //smallest index for a[i] >= target;
			ans = m;
			l = m + 1;
		}else{
			h = m - 1;
		}
	}
	return ans + 1;
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , x , y; cin >> n >> x >> y;
    	vector<int>a(n);
    	int sum = 0;
    	for(auto &it : a){
    		cin >> it;
    		sum += it;
    	}
    	int ans = 0;
    	sort(a.begin() , a.end());
    	for(int i  = n-1 ; i > 0;i--){
    		if(sum - a[i] <= x ) continue;
    		int j = lb(a , i-1 , sum-a[i] , x , y);
    		//cout<<a[i] << ' '<<j<<endl;
    		ans += j;
    	}
    	cout<<ans<<endl;	
    }
    return 0;
}