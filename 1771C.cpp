#include "bits/stdc++.h"
#define LR(j , n) for(int i = j ; i <= n;i++)
using namespace std;
#define ll long long int
const int MAXN = 4e4 + 9;
vector<int>prime;
void sieve(){
	bool primes[MAXN+1] = {false};
	for(int i = 2; i * i <= MAXN;i++){
		if(!primes[i]){
			for(int j = i * i ; j <= MAXN ;j+=i){
				primes[j] = true;
			}
		}
	}
	for(int i = 2 ; i <= MAXN;i++){
		if(!primes[i]) prime.push_back(i);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	sieve();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
    	vector<int>a(n);
    	map<int,int>mp;
    	LR(0 , n-1){
    		cin >> a[i];	
    	}
    	//TC : O(n * 10(worst case when a[i] divides by 2 to 29) * log2(a[i]))
    	for(int i = 0 ; i < n;i++){
    		for(int j = 0 ; prime[j] <= a[i] and j < prime.size();j++){
    			int p = prime[j];
    			if(a[i] % p == 0){
    				mp[p]++;
    				while(a[i] % p == 0){
    					a[i] /= p;
    				}
    			}
    		}
    		if(a[i] != 1) mp[a[i]]++;
    	}
    	bool ans = false;
    	for(auto it : mp){
    		if(it.second > 1){
    			ans = true;
    			break;
    		}
    		//cout<<it.first<<' '<<it.second<<endl;
    	}

    	cout<<(ans ? "YES\n" : "NO\n");
	}
	return 0;
}
