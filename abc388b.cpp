#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n , d; cin >> n >> d;
    vector<pair<int,int>>v(n);
    for(int i = 0 ;i < n;i++){
    	int t , l; cin >> t >> l;
    	v[i] = {t , l};
    }
   	for(int i = 1 ; i <= d;i++){
   		int ans = 0;
   		for(int j = 0 ; j < n;j++){
   			ans = max(ans , v[j].first * (i + v[j].second));
   		}
   		cout<<ans<<endl;
   	}
    return 0;
}