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
    	int64_t l , r , g; cin >> l >> r >> g;
    	int64_t divg = r / g - (l - 1) / g;
    	if(g > r){
    		cout<<-1<<' '<<-1<<endl;
    	}else if(g < l){
    		if(divg > 1){
    			for(int64_t i = l ; i <= l + g ; i++){
    				if(i % g == 0){
    					cout<<i<<' '<<i+g<<endl;
    					break;
    				}
    			}
    		}else{
    			cout<<-1<<' '<<-1<<endl;
    		}
    	}else{
    		if(divg > 1){
    			for(int64_t i = l ; i <= l + g ; i++){
    				if(i % g == 0){
    					cout<<i<<' '<<i+g<<endl;
    					break;
    				}
    			}
    		}else{
    			cout<<g<<' '<<g<<endl;
    		}
    	}
    }
    return 0;
}