#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define F first
#define S second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int x , y , z , ans = 1e9; cin >> x >> y >> z;
    	for(int i = 0 ; i <= 10 ; i++){
    		ans = min(ans , abs(x - i) + abs(y - i) + abs(z-i));
    	}
    	cout<<ans<<endl;
    }
    return 0;
}