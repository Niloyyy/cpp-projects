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
    	vector<int>zpos;
    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x;
    		if(x == 0) zpos.push_back(i+1);
    	}
    	if(zpos.size() == 1){
    		cout<<2<<endl;
    		if(zpos[0] == 1){
    			cout<<1<<' '<<2<<endl;
    			cout<<1<<' '<<n-1<<endl;
    		}else if(zpos[0] == n){
    			cout<<n-1<<' '<<n<<endl;
    			cout<<1<<' '<<n-1<<endl;
    		}else{
    			cout<<1<<' '<<n-1<<endl;
    			cout<<1<<' '<<2<<endl;
    		}
    	}else if(zpos.size() == 2){
    		if(zpos[0] == 1 and zpos[1] == n){
    			cout<<3<<endl;
    			cout<<1<<' '<<2<<endl;
    			cout<<2<<' '<<n-1<<endl;
    			cout<<1<<' '<<2<<endl;
    		}else{
    			cout<<2<<endl;
    			cout<<zpos[0]<<' '<<zpos[1]<<endl;
    			cout<<1<<' '<<n - zpos[1] - zpos[0]<<endl;
    		}
    	}else if(zpos.size() == 3){
    		cout<<
    		cout<<zpos[0]<<' '<<zpos[1]-1<<endl;
    	}
    }
    return 0;
}