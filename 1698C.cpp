#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define int long long int
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
    while(tc-- ){
    	int n; cin >> n;
    	vector<int>a(n) , ev;
    	for(auto &it : a) cin >> it;
    	sort(a.begin() , a.end());
    	int pos = 0 , neg = 0 , z = 0;
    	for(int i = 0 ; i < n;i++){
    		if(a[i] > 0) pos++;
    		else if(a[i] < 0) neg++;
    		else z++;
    	}
    	if(pos > 2 or neg > 2){
    		cout<<"NO\n";
    		continue;
    	}
    	int ze = min(z , 2ll);
    	while(ze--) ev.emplace_back(0);
    	for(int i = 0 ; i < pos;i++) ev.emplace_back(a[n-i-1]);
    	for(int i = 0 ; i < neg;i++) ev.emplace_back(a[i]);
    	bool f = 1;	
    	for(int i = 0 ; i < ev.size();i++){
    		for(int j = i + 1; j < ev.size();j++){
    			for(int k = j + 1; k < ev.size();k++){
    				int x = ev[i] + ev[j] + ev[k];
    				f = 0;
    				for(int p = 0 ; p < ev.size();p++){
    					if(ev[p] == x) f = 1;
    				}
    				if(!f) break;
    			}
    		}
    	}
    	cout<<(f ? "YES\n" : "NO\n");	
    }
    return 0;
}