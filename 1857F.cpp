#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define LR(j , n) for(int i = j ; i <= n;i++)
#define RL(n , j) for(int i = n ; i >= j ;i--)
#define msb(n) __lg(n)
#define gcd(a , b) __gcd(a , b)
#define lcm(a , b) a * b / __gcd(a , b)
using namespace std;
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


bool is_sqrt(ll x  , ll y){
	return (ll)sqrt(x * x - 4 * y) == sqrt(1.0 * x * x - 4.0 * y);
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , q; cin >> n;
    	map<ll , ll> fre;
    	LR(0 , n-1){
    		ll x;
    		cin >> x;
    		fre[x]++;
    	}
    	cin >> q;
    	while(q--){
    		ll x , y; cin >> x >> y;
    		ll pair = 0;
    		ll D = x * x - 4 * y;
    		if(D >= 0){
    			int a = (x + (int)sqrt(D)) / 2;
    			int b = (x - (int)sqrt(D)) / 2;
    			if(a + b == x and 1LL * a * b == y)	
    			a == b ? pair = (1LL * fre[a] * (fre[a] - 1) / 2LL) : pair = (1LL * fre[a] * fre[b]);
    		}
    		cout << pair <<' ';
    	}
    	cout<<endl;
    }
    return 0;
}