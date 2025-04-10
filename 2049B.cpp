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
    	string s; cin >> s;
    	bool f = 1;
    	for(int i = 0 ; i + 1 < n;i++){
    		if(s[i] == 'p'){
    			for(int j = i + 1; j < n;j++){
    				if(s[j] == 's'){
    					f = false;
    					break;
    				}
    			}
    		}
    	}
    	for(int i = 1 ; i + 2 < n;i++){
    		if(s[i] == 's' and s[i+1] == 'p'){
    			for(int j = i-1 ; j >= 0 ;j--){
    				if(s[j] == '.'){
    					for(int k = i + 2 ; k < n; k++){
    						if(s[k] == '.'){
    							f = 0;
    							break;
    						}
    					}
    				}
    			}
    		}
    	}
    	for(int i = 0 ; i + 3 < n;i++){
    		if((s[i] == 's' or s[i] == '.') and s[i+1] == 's' and s[i+2] == 'p' and s[i+3] == 'p'){
    			f = false;
    			break;
    		}
    	}
    	cout<<(f ? "YES\n" : "NO\n");
    }
    return 0;
}