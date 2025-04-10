#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define int long long
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

    int n;
    int sum , tot = 0 , s = 0;
    cin >> n >> sum;
    vector<int>v(2*n);
    for(int i = 0 ; i < n;i++){
    	cin >> v[i];
    	v[i+n] = v[i];
    	tot += v[i];
    }
    tot = sum % tot;
    set<int>st{0};
    for(int i = 0 ; i < 2 * n;i++){
    	s += v[i];
    	if(st.find(s-tot) != st.end()){
    		cout<<"Yes";
    		return 0;
    	}
    	st.insert(s);
    }
    // s = 0;
    // for(int i = n-1 ; i >= 0 ;i--){
    // 	s += v[i];
    // 	if(st.find(tot-s) != st.end()){
    // 		cout<<"Yes";
    // 		return 0;
    // 	}
    // }
    if(tot == 0) cout<<"Yes";
    else cout<<"No";
    return 0;
}