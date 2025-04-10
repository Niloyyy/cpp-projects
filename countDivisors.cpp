#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
vector<int> spf(N);

void sieve(){
	spf[1] = 1;
	for(int i = 2 ; i < N;i++){
		((i & 1) == 0) ? spf[i] = 2 : spf[i] = i;
	}
	for(int i = 3 ; i * i < N;i++){
		if(spf[i] == i){
			for(int j = i * i ; j < N ; j += i){
				if(spf[j] == j) spf[j] = i;
			}
		}
	}
}

map<int , int> prime_fact(int x){
	map<int , int> hisab;
	while(x != 1){
		hisab[spf[x]]++;
		x /= spf[x];
	}
	return hisab;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    int n; cin >> n;
    while(n--){
    	int x; cin >> x;
    	map<int , int> prime_freq = prime_fact(x);
    	int div = 1;
    	for(auto i : prime_freq){
    		div *= (i.second + 1);
    	}
    	cout<<div<<'\n';

    }
    return 0;
}