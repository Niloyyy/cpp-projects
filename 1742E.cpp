#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define MOD 1e9 + 7
using namespace std;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};
const int sz = 1e5 + 9;
vector<ll>pre(sz);

int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

ll bs(int x , int n){
	int l = 1 , r = n , m ;
	ll ans = 0;
	while(l <= r){
		m = l + (r - l) / 2;
		if(1LL * m * x >= pre[m] and pre[m] - pre[m-1] <= x){
			ans = pre[m];
			l = m + 1;
		}else{
			r = m - 1;
		}
	}
	return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , q; cin >> n >> q;
    	for(int i = 1 ; i <= n;i++){
    		int x; cin >> x;
    		pre[i] = pre[i-1] + x;
    	}
    	while(q--){
    		int x; cin >> x;
    		cout<<bs(x , n)<<" ";
    	}
    	cout<<endl;
    	//for(int i = 1 ; i <= n;i++) cout<<pre[i]<<" ";

    }
    return 0;
}