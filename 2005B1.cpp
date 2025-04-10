#include<bits/stdc++.h>
#define ll long long int
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
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , m , q; cin >> n >> m >> q;
    	int a[2]; cin >> a[0] >> a[1];
    	if(a[0] > a[1]) swap(a[0] , a[1]);
    	int b , ans; cin >> b;
    	if(a[0] < b and a[1] > b) ans = (a[1] - a[0]) / 2;
    	else if( b > a[1]) ans = n - a[1];
    	else ans = a[0] - 1;	
    	cout<<ans<<endl;
    }
    return 0;
}