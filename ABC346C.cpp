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

int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int n , k; cin >> n >> k;
    set<unsigned int>s;
    for(int i = 0 ; i < n;i++){
    	int x; cin >> x;
    	if(x <= k) s.insert(x);
    }
    unsigned long long ans = 1LL * k * (k + 1) / 2;
    for(auto it : s){
    	ans -= it;
    }
    cout<<ans;
    return 0;
}