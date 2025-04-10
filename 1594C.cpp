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

    int tc = 1 , t = 0; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	char c; cin >> c;
    	string s; cin >> s;
    	s = '#' + s;
    	vector<int>ans;
    	bool chk = 1 , ok = 1;
    	for(int i = 1 ; i <= n;i++) ok &= s[i] == c;
    	for(int i = 1 ; i <= n;i++){
    		chk = 1;
    		for(int j = i ; j <= n;j+=i){
    			chk &= (s[j] == c);
    		}
    		if(chk){
    			ans.push_back(i);
    			break;
    		}
    	}
    	if(ok){
    		cout<<0<<endl;
    		continue;
    	}
    	if(!chk){
    		ans.push_back(n-1);
    		ans.push_back(n);
    	}
    	cout<<ans.size()<<endl;
    	for(auto i : ans) cout<<i<<' ';cout<<endl;
    }
    return 0;
}