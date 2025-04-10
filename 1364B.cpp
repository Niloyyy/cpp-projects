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
    	vector<int>p(n);
    	for(int i = 0 ; i < n;i++) cin >> p[i];
    	int l = 0 , r = 1 , sz = n;
    	while(r + 1 < n){
    		int a = p[l] , b = p[r] , c = p[r+1];
    		if(abs(a-b) + abs(b-c) <= abs(a-c)){
    			p[r++] = -1;
    			sz--;
    		}else{
    			l = r;
    			r++;
    		}
    	}
    	cout<<sz<<endl;
    	for(auto i : p){
    		if(i != -1) cout<<i<<' ';
    	}
    	cout<<endl;	
    
    }
    return 0;
}