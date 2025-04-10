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
const int N = 2e5 + 9;
const int inf = INT_MAX;
const int _inf = INT_MIN;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    string s; cin >> s;
    vector<vector<int>>v(26 , vector<int>());
    for(int i = 0 ; i < s.size();i++){
    	v[s[i]-'A'].push_back(i+1);
    }
    long long ans = 0;
    for(int i = 0 ; i < 26;i++){
    	vector<int> t = v[i];
    	for(int j = 1 ; j < t.size();j++){
    		t[j] += t[j-1];
    	}
    	for(int j = 1 ; j < t.size();j++){
    		ans += (1ll * j * v[i][j] - t[j-1]-j);
    	}
    }
    cout<<ans;
    return 0;
}