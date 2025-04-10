#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int>arr(n);
    for(auto &x : arr) cin >> x;
    sort(arr.begin() , arr.end());
	int64_t ans = 0;
    for(int i = 0 ; i < n;i++){
    	int u = lower_bound(arr.begin() , arr.end() , arr[i] * 2) - arr.begin();
    	ans += (n - u);
    }	
    cout<<ans;

    return 0;
}