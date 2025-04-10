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
    	int xr = 0;
    	int mx = INT_MIN;
    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x;
    		mx = max(mx , x);
    		xr ^= x;
    	}
    	if((n&1)) cout <<xr<<endl;
    	else{
    		if(xr!=0) cout <<"-1"<<endl;
    		else cout << mx <<endl;
    	}
    }
  
    return 0;
}