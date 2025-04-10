#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
using namespace std;

using namespace __gnu_pbds;  
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>



int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector< pair<int , int> > v(n);
    	for(int i = 0 ; i < n;i++){
    		int x , y; cin >> x >> y;
    		v[i] = {x , y};
    	}
    	sort(v.begin() , v.end());
    	ordered_set s;
    	for(int i = 0 ; i < n;i++){
    		s.insert(v[i].s);
    	}
    	long long ans = 0;
    	for(int i = 0 ; i < n;i++){
    		int x = s.order_of_key(v[i].s);
    		s.erase(v[i].s);
    		ans += x;
    	}
    	cout<<ans<<endl;
    }
    return 0;
}