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
    	int n , m; cin >> n >> m;
    	vector<int> u;
    	map<int,int>mpa;
    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x;
    		u.push_back(x);
    		mpa[x]++;
    	}
    	priority_queue<int>temp , v;
    	for(int i = 0 ; i < m;i++){
    		int x; cin >> x;
    		v.push(x);
    	}
    	while(!v.empty()){
    		int sum = v.top();
    		v.pop();
    		if(mpa[sum]){
    			mpa[sum]--;
    			temp.push(sum);
    			continue;
    		}
    		int x  , y;
    		if(sum & 1){
    			x = sum / 2;
    			y = x + 1;
    		}else{
    			x = sum / 2;
    			y = x;
    		}
    		if(mpa[x]){
    			temp.push(x);
    			mpa[x]--;
    		}else{
    			v.push(x);
    		}
    		if(mpa[y]){
    			temp.push(y);
    			mpa[y]--;
    		}else{
    			v.push(y);
    		}
    		if(v.size() > u.size()) break;
    	}
    	cout<<(temp.size() == u.size() and v.empty() ? "Yes\n" : "No\n");
    }
    return 0;
}