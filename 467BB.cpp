#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define LR(j , n) for(int i = j ; i <= n;i++)
#define RL(n , j) for(int i = n ; i >= j ;i--)
using namespace std;
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , m , k , ans = 0; cin >> n >> m >> k;
	vector<int>v(m+1);
	LR(0,m) cin >> v[i];
	for(int i = 0 ; i < m;i++){
		int cnt = 0;
		for(int bit = 0 ; bit < n;bit++){
			if((v[m] & (1 << bit)) != (v[i] & (1 << bit))) cnt++;
		}
		if(cnt <= k) ans++;
	}
	cout<<ans;
    return 0;
}