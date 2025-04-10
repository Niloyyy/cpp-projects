#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int m = 1e9 + 9;
const int N = 2e5 + 9;
long long fact[N]

// void pre(){
// 	fact[0] = 1;
// 	for(int i = 1; i < N;i++){
// 		fact[i] = 1ll * i * fact[i-1];
// 		fact[i] %= mod;
// 	}
// }

// int iterative_binpow(int a , int n){
// 	int ans = 1;
// 	while(n > 0){
// 		if(n & 1) ans = ans * a % m;
// 		a = a * a % m;
// 		n >>= 1;
// 	}
// 	return ans;
// }

// int ncr(int n , int k){
// 	int res = 1;
// 	if(k > n - k){
// 		k = n - k;
// 	}
// 	for(int i = 0 ; i < r ;i++){
// 		res *= (n-i);
// 		res /= (i+1);
// 	}
// 	return res;
// }

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    //pre();
    int n , a , b; cin >> n >> a >> b;
    int x = iterative_binpow(2 , n);
    cout<<ncr(5 , 2); 


    return 0;
}