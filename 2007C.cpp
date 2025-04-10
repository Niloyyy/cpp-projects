#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int n , b , a , ans = INT_MAX; cin >> n >> a >> b;
    	vector<int>c; 
    	int g = __gcd(a , b);
    	for(int i = 0 ; i < n;i++){
    		int u ; cin >> u;
    		u %= g;
    		c.push_back(u);
    	}
    	sort(c.begin() , c.end());
    	for(int i = 0 ; i < n ;i++){
    		ans = min(ans , c[n-1+i] - c[i]);
    		c.push_back(c[i]+g);
    	}
    	cout<<ans<<endl;	
    }
    return 0;
}