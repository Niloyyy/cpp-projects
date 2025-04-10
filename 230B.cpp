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
const int sz = 1000009;

vector<int> primes;

void sieve(){
	vector<bool>p(sz , true);
	for(int i = 2 ; i * i <= sz;i++){
		if(p[i]){
			for(int j = i * i ; j <= sz;j += i){
				p[j] = false;
			}
		}
	}

	for(int i = 2 ; i <= sz;i++){
		if(p[i]){
			primes.push_back(i);
		}
	}
}

bool bs(int x){
	int l = 0 , r = primes.size() - 1 , m;
	while(l <= r){
		m = l + (r - l) / 2;
		if(primes[m] == x) return true;
		if(primes[m] > x) r = m - 1;
		else l = m + 1;
	}
	return false;
}


int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    sieve();
    vector<ll>v(n);
    for(auto &i : v) cin >> i;
    //cout<<sqrt(4) * sqrt(4);
    for(int i = 0 ; i < n;i++){
    	int p = (int)sqrt(v[i]);
    	1LL * p * p == v[i] and v[i] != 1 and bs(sqrt(v[i])) ?  cout<<"YES\n" : cout<<"NO\n";
    }	
  
    return 0;
}