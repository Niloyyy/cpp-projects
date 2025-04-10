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
    	int n; cin >> n;
    	map<pair<int ,int> , vector<int>>seg;
    	for(int i = 1 ; i <= n;i++){
    		int l , r; cin >> l >> r;
    		seg[{l , r}].push_back(i);
    	}
    	for(auto i : seg){
    		cout<<i.f.f<<' '<<i.f.s<<endl;
    		if(i.s.size() > 1){
    			//cout<<i.s[0]<<' '<<i.s[1]<<endl;
    			//break;
    		}
    	}

    
    }
    return 0;
}