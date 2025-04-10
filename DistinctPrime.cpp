#include<bits/stdc++.h>
using namespace std;
#define MAXN 100001
int spf[MAXN];

void sieve(){
	spf[1] = 1;
	for (int i = 2; i < MAXN; i++)
		spf[i] = i;
	for (int i = 4; i < MAXN; i += 2)
		spf[i] = 2;

	for (int i = 3; i * i < MAXN; i++) {
		if (spf[i] == i) {
			for (int j = i * i; j < MAXN; j += i)
				if (spf[j] == j)
					spf[j] = i;
		}
	}
}

set<int> get_factorization(int x){
	set<int> ret;
	while (x != 1) {
		ret.insert(spf[x]);
		x = x / spf[x];
	}
	return ret;
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	sieve();
	vector<int>ans;
	for(int i = 30 ; i <= 3000 ; i++){
		set<int>st = get_factorization(i);
		if(st.size() >= 3) ans.push_back(i);
	}

	int tc; cin >> tc;
	while(tc--){
		int x ; cin >> x;
		cout << ans[x-1]<<endl;
	}
	return 0;
}
