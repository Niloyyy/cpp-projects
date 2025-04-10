#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define LR(j , n) for(int i = j ; i <= n;i++)
#define RL(n , j) for(int i = n ; i >= j ;i--)
#define msb(n) __lg(n)
#define gcd(a , b) __gcd(a , b)
#define lcm(a , b) a * b / __gcd(a , b)
using namespace std;
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};
const int MAXN = 1e2;
int spf[MAXN];

int power(int a , int b , int m){
  if(b == 1) return a % m;
  if(b&1){
    int x = power(a , b / 2 , m);
    return (1LL * x * x) % m;
  }else{
    return (power(a , b - 1 , m) * a) % m;
  }
}

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

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<sizeof(long long int);
    return 0;
}