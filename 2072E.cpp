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
    	int k; cin >> k;
    	if(k == 0){
    		cout<<k<<endl;
    		continue;
    	}
    	if(k == 1){
    		cout<<2<<endl;
    		cout<<0<<' '<<0<<endl;
    		cout<<1<<' '<<0<<endl;
    		continue;
    	}
    	if(k == 2){
    		cout<<3<<endl;
    		cout<<0<<' '<<0<<endl;
    		cout<<1<<' '<<0<<endl;
    		cout<<1<<' '<<1<<endl;
    		continue;
    	}
    	int x = 0 , y = 0;
    	vector<pair<int,int>>po;
    	while(k > 2){
    		int tot = ((int)sqrt(1 + 8 * k) - 1) / 2;
    		//cout<<tot<<endl;
    		for(int i = 0; i <= tot;i++){
    			po.push_back({x++ , y});
    		}
    		y++;
    		k -= (tot * (tot + 1)) / 2;
    	}
    	if(k == 1){
    		auto p = po.back();
    		po.push_back({p.f , p.s + 1});
    	}else if(k == 2){
    		auto p = po.back();
    		po.push_back({p.f , p.s + 1});
    		po.push_back({p.f + 1, p.s + 1});
    	}

    	cout<<po.size()<<endl;
    	for(auto i : po){
    		cout<<i.f<<' '<<i.s<<endl;
    	}
    
    }
    return 0;
}