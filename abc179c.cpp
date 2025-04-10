#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e6 + 9;
int p[N];
void sieve(){
	for(int i = 2 ; i < N;i++) i & 1 ? p[i] = i : p[i] = 2;
	for(int i = 3 ; i * i < N;i++){
		if(p[i] == i){
			for(int j = i * i ; j < N;j+=i){
				p[j] = i;
			}
		}
	}
}

int div(int x){
	map<int , int>ret;
	while(x != 1){
		ret[p[x]]++;
		x /= p[x];
	}
	int d = 1 ;
	for(auto i : ret){
		d *= (1 + i.second);
	}
	return d;
}



int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    //sieve();
    int n; cin >> n;
    long long ans = 0;
    for(int i = 1 ; i < n;i++){
    	// int d = div(n - i);
    	// ans += d;
    	ans += (n - 1) / i;
    }
    cout<<ans;

    

    return 0;
}