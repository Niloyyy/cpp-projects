#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int N = 2e5;
int spf[N+5];
vector<int>p;
void sieve(){
	vector<bool>prime(N+5 , 1);
	for(int i = 2 ; i <= N;i++){
		if(prime[i]){
			for(int j = i * i ; j <= N;j++){
				prime[j] = 0;
			}
		}
	}
	for(int i = 2 ; i <= N;i++){
		if(prime[i]) p.push_back(i);
	}
	for(int i = 2 ; i <= N;i++) spf[i] = i;
	for(int i = 2 ; i <= N;i++){
		if(spf[i] == i){
			for(int j = i * i; j <= N;j+=i){
				spf[j] = i;
			}
		}
	}	
}

map<int , bool> prime_fact(int x){
	map<int , bool>ret;
	if(x == 0){
		for(auto it : p){
			ret[it] = 0;
		}
		return ret;
	}
	map<int , int>pp;
	while(x != 1){
		pp[spf[x]]++;
		x /= spf[x];
	}
	for(auto it : p){
		if(pp[it] % 2) ret[it] = 1;
		else ret[it] = 0;
	}
	return ret;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    sieve();
    int n; cin >> n;
    vector<int>arr(n);
    int z = 0;
    for(auto &x : arr){
    	cin >> x;
    	if(x == 0) z++;
    }
   	map< map<int , bool> , int>mp;
    for(int i = 0 ; i < n;i++){
    	map<int , bool> m = prime_fact(arr[i]);
    	mp[m]++;
    }
    int64_t ans = z * (n - z);
    for(auto it : mp){
    	int x = it.second;
    	ans += 1ll * x * (x - 1) / 2;
    }	
    cout<<ans;
    return 0;
}