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

int bs(vector<int>&a , int x , int y){
	int l = 0 , r = a.size() - 1 , m;
	while(l <= r){
		m = l + (r - l) / 2;
		if(a[m] < y and a[m] >= x){
			return a[m];
		}
		if(a[m] < x) l = m + 1;
		else r = m - 1; 
	}
	return -1; 
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>got , arr(n);
    	for(int i = 0 ; i < n;i++){
    		cin >> arr[i];
    	}
    	for(int i = 0 ; i + 1 < n;i++){
    		if(arr[i] != arr[i + 1]) got.push_back(i+1);
    	}
    	int q; cin >> q;
    	while(q--){
    		int l , r; cin >> l >> r;
    		int e = bs(got , l , r);
    		e == -1 ? cout<<e<<' '<<e<<endl : cout<<e<<' '<<e + 1<<endl;
    	}
    	cout<<endl;
    }
    return 0;
}