#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>v; 
    	for(int i = 0  , j = 0; i < n;i++){
    		int x; cin >> x;
    		v.push_back(x);
    		int sz = v.size();
    		if(i and v[sz-2] == x) v.pop_back();
    	}
    	int ans = v.size();
    	for(int i = 1 ; i < v.size()-1;i++){
    		ans -= (v[i] > v[i-1] and v[i] < v[i+1]) or (v[i] < v[i-1] and v[i] > v[i+1]);
    	}
    	cout<<ans<<endl;
    }
    return 0;
}