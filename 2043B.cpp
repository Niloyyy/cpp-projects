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
    	int n , d; cin >> n >> d;
    	vector<int>ar{1};
    	if(n < 3){
    		if(d % 3 == 0) ar.push_back(3);
    		if(d % 7 == 0) ar.push_back(7);
    		if(d % 9 == 0) ar.push_back(9);
    	}else{
    		ar.push_back(3);
    		ar.push_back(7);
    		if(n > 5 or d == 3 or d == 6 or d == 9) ar.push_back(9);
    	}
    	if(d == 5) ar.push_back(5);
    	sort(ar.begin() , ar.end());
    	for(auto i : ar) cout<<i<<' ';
    	cout<<endl;	
    }
    return 0;
}