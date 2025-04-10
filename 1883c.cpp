#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int n , k; cin >> n >> k;
    	ll hi = 1;
    	for(int i = 1 ; i <= n;i++){
    		int x; cin >> x;
    		hi *= (x % k);
    	}
    	ll amnoi = hi;
    	while(hi--){
    		if(hi%k==0) break;
    	}
    	cout << amnoi - hi<<endl;

    }
    
    return 0;
}