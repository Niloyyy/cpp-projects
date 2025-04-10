#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int> bit_cnt(30 , 0);
    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x;
    		bit_cnt[__lg(x)]++;
    	}
    	ll ans = 0;
    	for(int i = 0 ; i < 30;i++){
    		ans += (1LL*(bit_cnt[i]-1) * bit_cnt[i]) / 2;
    	}

    	cout << ans <<endl;

    }
    
    return 0;
}