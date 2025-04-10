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
    	int n , l , r; cin >> n >> l >> r;
    	vector<int>left , mid , right;
    	for(int i = 1 ; i < l;i++){
    		int x; cin >> x;
    		left.push_back(x);
    	}
    	int64_t sum = 0;
    	for(int i = l ; i <= r;i++){
    		int x; cin >> x;
    		mid.push_back(x);
    		sum += x;
    	}

    	for(int i = r + 1; i <= n;i++){
    		int x; cin >> x;
    		right.push_back(x);
    	}
    	sort(left.begin() , left.end());
    	sort(mid.begin() , mid.end());
    	sort(right.begin() , right.end());
    	int64_t ls = 0 , ms1 = 0 , ms2 = 0 , rs = 0;
    	for(int i = 0 , j = mid.size()-1 ; i < left.size() and j >= 0 ;i++ , j--){
    		if(mid[j] < left[i]){
    			break;
    		}
    		ms1 += mid[j];
    		ls += left[i];
    	}
    	//for(auto i : right) cout<<i<<' ';
    	for(int i = 0 , j = mid.size()-1 ; i < right.size() and j >= 0 ;i++ , j--){
    		if(mid[j] < right[i]){
    			break;
    		}
    		ms2 += mid[j];
    		rs += right[i];
    	}
    	//cout<<rs;
    	cout<<min(sum - ms1 + ls , sum - ms2 + rs)<<endl;
    }
    return 0;
}