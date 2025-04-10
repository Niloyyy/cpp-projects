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
const int N = 1e3 + 5;
int arr[N] , x;

bool bs(int h){
	vector<int>tmp(h);
	for(int i = 0 ; i < h;i++){
		tmp[i] = arr[i+1];
	}
	sort(tmp.begin() , tmp.end() , greater<int>());
	int64_t sum = 0;
	for(int i = 0 ; i < h;i+=2){
		sum += tmp[i];
	}
	return sum <= x;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; //cin >> tc;
    while(tc--){
    	int n ; cin >> n >> x;
    	for(int i = 1 ; i <= n;i++) cin >> arr[i];
    	int l = 1 , r = n , m , ans = 0;
    	while(l <= r){
    		int m = l + (r - l) / 2;
    		if(bs(m )){
    			ans = m;
    			l = m + 1;
    		}else{
    			r = m - 1;
    		}
    	}
    	cout<<ans<<endl;
    }
    return 0;
}