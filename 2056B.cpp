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
const int N = 1005;
vector<int>g[N];


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	string ss[n];
    	for(int i = 0 ; i < n;i++){
    		cin >> ss[i];
    	}
    	vector<vector<bool>>vis(n , vector<bool>(n , 0));
    	for(int i = 0 ; i < n;i++){
    		for(int j = 0 ; j < n;j++){
    			if(ss[i][j] == '1' and !vis[i][j] and !vis[j][i]){
    				//cout<<i+1<<' '<<j+1<<endl;
    				g[i+1].push_back(j+1);
    				g[j+1].push_back(i+1);
    				vis[i][j] = 1;
    				vis[j][i] = 1;
    			}
    		}
    	}
    	multimap<int,int>mp;
    	for(int i = 1 ; i <= n;i++){
    		mp.insert({g[i].size() , i});
    	}
    	vector<pair<int,int>>v;
    	for(auto i : mp){
    		v.push_back({i.f , i.s});
    	}
    	sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first)
            return a.second > b.second;
        	return a.first < b.first;
    	});

    	for(auto i : v){
    		cout<<i.s<<' ';
    	}
    	cout<<endl;
    	for(int i = 0 ; i < N;i++) g[i].clear();
    }
    return 0;
}