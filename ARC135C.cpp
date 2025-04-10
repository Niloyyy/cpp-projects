#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
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

    int n; cin >> n;
    vector<int>v(n);
    long long ans = 0;
    for(auto &i : v) cin >> i;
    for(int i = 0 ; i < n;i++){
    	v[i] ^= 10;
    }
    for(int i = 0 ; i < n;i++){
    	v[i] ^= 10;
    }
    for(int i = 0 ; i < n;i++){
    	ans += v[i];    
    }
    cout<<ans;

    return 0;
}