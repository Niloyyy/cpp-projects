#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; //cin >> tc;
    while(tc--){
    	int n , f = 0 , s = 0 , th = 0 , fr = 0; cin >> n; 
    	for(int i = 0 ; i < n;i++){
    		int x , y; cin >> x >> y;
    		if(x > 0 and y > 0) f++;
			else if(x < 0 and y > 0) s++;
			else if(x < 0 and y < 0) th++;
			else fr++;
    		
    	}
    	cout<< (1LL * f * th  + 1ll * s * fr );
    
    }
    return 0;
}