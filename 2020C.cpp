#include<bits/stdc++.h>
#define int long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int b , c , d , ans = 0; cin >> b >> c >> d;
    	for(int bit = 0 ; bit <= msb(max({b,c,d}))+2;bit++){
    		bool x  = (b & (1ll<<bit)) , y = (c & (1ll<<bit)) , z = (d & (1ll<<bit));
    		//cout<<x<<' '<<y<<' '<<z<<endl;
    		if((x == 0 and y == 1 and z == 1) or (x == 1 and y == 0 and z == 0)){
    			ans = -1;
    			break;
    		}
    		if((x == 0 and y == 0 and z == 1) or (x == 0 and y == 1 and z == 0) or (x == 1 and y == 1 and z == 0)) ans += (1ll<<bit);
    	}
    	cout<<ans<<endl;
    }
    return 0;
}