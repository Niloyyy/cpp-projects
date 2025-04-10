#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
vector<ll>prime;

void sieve(int n){
	bool a[n+1];
	memset(a , true , sizeof(a));
	int rt = sqrt(n);
	for(int i = 2 ; i <= rt;i++){
		for(int j = i*i ; j <= n;j+=i){
			if(a[j]) a[j] = false;
		}
	}
	for(int i = 2 ; i <= n;i++){
		if(a[i]) prime.push_back(i);
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve(10000000);
    int tc; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	ll sum = 0;
    	int i = 0;
    	while(prime[i]==n){
    		sum += prime[i++];
    	}
    	cout << sum <<endl;
    }
}