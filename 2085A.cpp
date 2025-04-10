#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int
#define endl '\n'
#define f first
//#define s second
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
    	int n , k; cin >> n >> k;
    	string str; cin >> str;
    	int s = 0 , e = n - 1;
    	if(n == 1){
    		cout<<"NO\n";
    		continue;
    	}
    	bool f = 0;
    	while(s < e){
    		if(str[s] < str[e]){
    			f = 1;
    			break;
    		}
    		if(str[s] == str[e]){
    			s++ , e--;
    			continue;
    		}
    		else break;

    	}

    	for(int j = s ; j < e;j++){
    		if(str[j] > str[0] and k > 0){
    			f = 1;
    		}
    	}
    	cout<<(f ? "YES\n" : "NO\n");
    }
    return 0;
}