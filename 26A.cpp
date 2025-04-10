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
    int n; cin >> n;
    sieve(3000);
    int ans = 0;
    for(int i = 6 ; i <= n;i++){
    	int cnt = 0;
    	for(int j = 0 ; j < prime.size();j++){
    		if(i%prime[j]==0) cnt++;
    	}
    	if(cnt == 2) ans++;
    }
    cout<<ans;
    //cout << prime[2995];

    
    return 0;
}