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
    	vector<int>a(n);
    	int len = n , g = 0 , one = 0;
    	bool f = 0;
    	for(auto &i : a){
    		cin >> i;
    		one += (i == 1);
    	}
    	if(one > 0){
    		cout<<n - one;
    		return 0;
    	}	
    	for(int i = 0 ; i < n;i++){
    		g = a[i];
    		for(int j = i + 1; j < n;j++){
    			g = __gcd(g , a[j]);
    			if(g == 1){
    				f = 1;
    				len = min(len , j - i);
    				break;
    			}
    		}
    	}
    	cout<<(f ? n-1+len : -1)<<endl;	
    
    }
    return 0;
}