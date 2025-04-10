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


bool is_set(int x, int pos) {
    return (x & (1 << pos)) != 0;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , l , r; cin >> n >> l >> r;
    	vector<int>a(n);
    	map<int , int>mp;
    	for(int i = 0 ; i < n;i++){
    		cin >> a[i];
    		mp[a[i]]++;
    	}
    	bool f = 1;
    	sort(a.begin() , a.end() , greater<int>());
    	for(auto &i : mp){
    		if(i.s > 1){
    			f = 0;
    			break;
    		}
    	}
    	if(n > 1000 or !f){
    		cout<<"NO\n";
    		continue;
    	}
    	long long res = 1;
    	for(int i = 0 ; i < min(1000 , n);i++){
    		for(int j = i+1 ; j < min(n , 1000);j++){
    			res *= (a[i] ^ a[j]);
    			if(res > r){
    				f = 0;
    				break;
    			}
    		}
    		if(!f) break;
    	}
    	(res >= l and f == 1) ? cout<<"YES\n" : cout<<"NO\n";
    
    }
    return 0;
}