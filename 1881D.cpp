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
const int N = 1e6 + 9;
int spf[N];

void sieve(){
	for(int i = 1 ; i <= N;i++){
		(i&1) ? spf[i] = i : spf[i] = 2;
	}
	for(int i = 3; i * i <= N;i++){
		if(spf[i] == i){
			for(int j = i * i ; j <= N;j+=i){
				spf[j] = i;
			}
		}
	}
}

map<int , int> get_fact(int x){
	map<int , int> ret;
	while(x != 1){
		ret[spf[x]]++;
		x /= spf[x];
	}
	return ret;
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    sieve();
    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	map<int , int> cnt;
    	for(int i = 0 ; i < n;i++){
    		int x ; cin >> x;
    		map<int , int>m = get_fact(x);
    		for(auto i : m){
    			cnt[i.first] += i.second;
    		}
    	}
    	bool ans = true;
    	for(auto i : cnt){
    		ans &= !(i.second % n);
    		if(!ans) break;
    	}
    	cout<<(ans ? "YES\n" : "NO\n");
    }
    return 0;
}