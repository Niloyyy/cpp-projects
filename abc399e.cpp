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

    int n; cin >> n;
    string s , t; cin >> s >> t;
    map<int , set<int> > m;
    set<int>se;
    for(int i = 0 ; i < n;i++){
    	m[s[i] - 'a'].insert(t[i] - 'a');
    	se.insert(s[i]-'a');
    }
    int ans = m.size() , cnt = 0;
    for(auto i : m){
    	if(i.s.size() > 1){
    		ans = -1;
    		break;
    	}else if(i.s.size() == 1){
    		if(i.f == *i.s.begin()) cnt++;
    	}
    }
    if(cnt == se.size()) cout<<0<<endl;
    else cout<<ans<<endl;

    return 0;
}