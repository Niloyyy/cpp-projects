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

    ll n , k , x , tmp = 1; cin >> n >> k >> x;
    ull a = k;
    a %= mod;
    ull d = x * (x + 1) / 2;
    d %= mod;
    a *= d;
    a %= mod;

    ull c = n / x;
    c %= mod;
    a *= c;
    ull b = k;
    b %= mod;
    ull e = (n % x + 1) * (n % x) / 2;
    e %= mod;
    b *= e;
    b %= mod;

    cout<<(a + b) % mod;
    return 0;
}