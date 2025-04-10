#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define f first
#define s second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;
const int N = 2e6 + 9;
int spf[N + 5];

void sieve(){
	for(int i = 1 ; i < N;i++) (i & 1) ? spf[i] = i : spf[i] = 2;
	for(int i = 3 ; i * i < N;i++){
		if(spf[i] == i){
			for(int j = i * i ; j < N;j+=i){
				spf[j] = i;
			}
		}
	}	
}

map<int,int> get_fact(int x){
	map<int,int>ret;
	while(x != 1){
		ret[spf[x]]++;
		x /= spf[x];
	}
	return ret;
}

long long binpow(long long a , long long n){
	long long ans = 1;
	while(n){
		if(n & 1) ans = ans * a;
		a = a * a;
		n >>= 1;
	}
	return ans;
}

long long phi(map<int,int>&fact){
	long long a = 1 , b = 1;
	for(auto i : fact){
		a *= (binpow(i.f , i.s+1) - 1ll);
		b *= (i.f - 1ll);
	}
	return a / b;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    sieve();
    int n; cin >> n;
    vector<int>a(n);
    for(auto &i : a) cin >> i;
    for(auto &i : a){
    	map<int,int> fact = get_fact(i);
	    int sum = phi(fact) - i;
	    //cout<<sum<<endl;
	    if(sum > i) cout<<"abundant\n";
	    else if(sum == i) cout<<"perfect\n";
	    else cout<<"deficient\n";
    }
    return 0;
}