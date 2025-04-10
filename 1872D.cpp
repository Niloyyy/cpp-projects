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

long long lcm(int x , int y){
	return 1ll * x * y / __gcd(x , y);
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , x , y ; cin >> n >> x >> y;
    	long long x_y = lcm(x , y);
    	int tot_x = (n / x) - (n / x_y) , tot_y = (n / y) - (n / x_y);
    	cout<<(1ll * n * tot_x - 1ll * tot_x * (tot_x - 1) / 2) - (1ll * tot_y * (tot_y + 1) / 2)<<endl;
    }
    return 0;
}