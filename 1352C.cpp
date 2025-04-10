#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    ll n , k; cin >> n >> k;
    	ll l = 1 , r = k + n , m;
    	ll ans ;
    	while(r >= l)
    	{
    		m = (r + l) / 2;
    		if(m - (m/n) == k){
                if(m % n==0) ans = m - 1;
    			else ans = m;
    			break;
    		}
    		if((m - (m/n)) > k) r = m - 1;
    		else l = m + 1;
    	}
    	cout << ans <<endl;
    }
    return 0;
}