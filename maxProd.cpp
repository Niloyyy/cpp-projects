#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n , k; cin >> n >> k;
    ll a[n];
    ll ans = 0;
    for(ll i = 0 ; i < n;i++){
     cin >> a[i];
     if(a[i]==0) ans = n;
    }

    long long prod = 1;
    ll srt = 0;
    for(ll i = 0 ; i < n ;i++){
    	prod *= a[i];
    	if(prod <= k){
            ans = max(ans , i - srt + 1);
    	    //continue;
    	}else{
    		while(prod > k && srt <= i){
    			prod /= a[srt++];
    		}
    		//prod /= a[srt];
    		ans = max(ans , i - srt + 1);
    	}
    }
    cout << ans<<endl;	
    
    return 0;
}