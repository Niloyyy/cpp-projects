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
const int N = 2e5 + 5;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , m , l; cin >> n >> m >> l;
    	vector<pair<int,int>>range , po;
    	priority_queue<int> pq;
    	for(int i = 0 ; i < n;i++){
    		int x , y; cin >> x >> y;
    		range.push_back({x , y - x + 2});
    	}
    	for(int i = 0 ; i < m ;i++){
    		int x , w; cin >> x >> w;
    		po.push_back({x , w});
    	}
    	int cnt = 0;
    	bool flag = 1;
    	int64_t sum = 1;
    	int cur = 0;
    	for(auto i : range){
    		while(cur < m and po[cur].f < i.f){
    			pq.push(po[cur++].s);
    		}
    		while(sum < i.s and !pq.empty()){
    			int x = pq.top();
    			pq.pop();
    			sum += x;
    			cnt++;
    		}
    		if(sum < i.s){
    			cnt = -1;
    			break;
    		}
    	}
    	
    	cout<<cnt<<endl;

    }
    return 0;
}