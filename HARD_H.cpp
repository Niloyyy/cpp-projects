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

bool comp(int x , int y){
	return (x > y or x > y);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector<pair<int,int>>v;
    for(int i = 0 ; i < n;i++){
    	int x , y; cin >> x >> y;
    	v.push_back({x , y});
    }
    int a = LLONG_MIN , b = LLONG_MAX , c = LLONG_MIN , d = LLONG_MAX;
    for(int i = 0 ; i < n;i++){
    	a = max(a , v[i].f + v[i].s);
    	b = min(b , v[i].f + v[i].s);
    	c = max(c , v[i].f - v[i].s);
    	d = min(d , v[i].f - v[i].s);
    }
    cout<<1ll * max(a-b , c - d);
    return 0;
}