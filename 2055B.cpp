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
    	int64_t a = 0 , b = 0;
    	vector<int>u(n) , v(n);
    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x;
    		u[i] = x;
    		a += x;
    	}
    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x;
    		v[i] = x;
    		b += x;
    	}
    	int64_t mx = 0;
    	int id = -1;
    	for(int i = 0 ; i  < n;i++){
    		if(v[i] - u[i] > mx){
    			mx = v[i] - u[i];
    			id = i;
    		}
    	}
    	for(int i = 0 ; i < n;i++){
    		if(i == id) u[i] += mx;
    		else u[i] -= mx;
    	}
    	bool f = 1;
    	for(int i = 0 ; i < n;i++){
    		f &= (u[i] >= v[i]);
    	}

    	cout<<(f ? "YES\n" : "NO\n");

    
    }
    return 0;
}