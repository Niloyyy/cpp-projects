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

int s(int x){
	int l = 1 , h = 2e10 , m;
	while(l <= h){
		m = l + (h - l) / 2;
		if(m * m <= x) l = m + 1;
		else h = m - 1;
	}
	return h;
}

int bs(int x){
	int l = 1 , h = 4e18;
	while(h >= l){
		int m = l + (h-l) / 2;
		int ans = m - s(m);
		if(ans >= x) h = m - 1;
		else l = m + 1;
	}
	return l;
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	cout<<bs(n)<<endl;
    }
    return 0;
}