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
const int sz = 10009;

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

vector<int> prime_fact(int n) {
    vector<int> factorization;
    for (int d : primes) {
        if (d * d > n)
            break;
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
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
    
    int tc; cin >> tc;
    sieve();
    while(tc--){
    	int n; cin >> n;
    	vector<int> p = prime_fact(n);
    	//for(auto i : p) cout<<i<<" ";
    	if(p.size() < 3){
    		cout<<"NO\n";
    		continue;
    	}
    	int a = p[0] , b = 1 , c = 1;
    	for(int i = 1 ; i < p.size();i++){
    		if(a >= b) b *= p[i];
    		else c *= p[i];
    	}
    	if(a != b and a != c and b != c and b > 1 and c > 1){
    		cout<<"YES\n"<<a<<" "<<b<<" "<<c<<endl;
    	}else{
    		cout<<"NO\n";
    	}

    }
  
    return 0;
}