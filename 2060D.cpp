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
    	int n; cin >> n;
    	vector<int>arr(n);
    	for(int i = 0; i < n;i++) cin >> arr[i];
    	int mx = *max_element(arr.begin() , arr.end());
    	if((arr[0] == mx and arr[1] != mx) or arr[0] > arr[1]){
    		cout<<"NO\n";
    		continue;
    	}
    	bool ff = 1;
    	for(int i = 1 ; i < n;i++){
    		if((i + 1 < n) and arr[i] > arr[i-1] + arr[i+1]){
    			ff = 0;
    			break;
    		}
    		int x = min(arr[i] , arr[i-1]);
    		arr[i] -= x;
    		arr[i-1] -= x;
    	}
    	for(int i = 0 ; i + 1 < n;i++){
    		ff &= (arr[i+1] >= arr[i]);
    		//cout<<arr[i]<<' ';
    	}	
    	cout<<(ff ? "YES\n" : "NO\n");
    }
    return 0;
}