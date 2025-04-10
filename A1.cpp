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
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    for(int t = 1 ; t <= tc;t++){
    	int s , d , k; cin >> s >> d >> k;
    	int bun = 2 * (s + d);
    	int patty = 2 * d + s;
    	(k <= patty and (k + 1) <= bun) ? printf("Case #%d: YES\n", t) : printf("Case #%d: NO\n", t);
    }
    return 0;
}