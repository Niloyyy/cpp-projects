#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

	int n , m , d; cin >> n >> m >> d;
	vector<int>a(n) , b(m);
	for(auto &i : a) cin >> i;
	for(auto &i : b) cin >> i;
	sort(b.begin() , b.end());
	int ans = LLONG_MIN;
	for(int i = 0 ; i < n;i++){
		int mn = a[i] - d;
		int mx = a[i] + d;
		int l = lower_bound(b.begin() , b.end() , mn) - b.begin();
		int r = upper_bound(b.begin() , b.end() , mx) - b.begin()-1;
		if(l >= 0 and abs(a[i] - b[l]) <= d) ans = max(ans , a[i] + b[l]);
		if(r < m and abs(a[i] - b[r]) <= d) ans = max(ans , a[i] + b[r]);
	}
	cout<<(ans == LLONG_MIN ? -1 : ans);
    return 0;
}