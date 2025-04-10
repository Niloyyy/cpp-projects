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
vector<ll>divisors;

void get_divisors(ll n){
	for(ll i = 1; i * i <= n;i++){
		if(n % i == 0){
			divisors.emplace_back(i);
			if(n / i != i){
				divisors.emplace_back(n/i);
			}
		}
	}
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n , k;  cin >> n >> k;
    get_divisors(n);
    sort(divisors.begin() , divisors.end());
    divisors.size() < k ? cout<<-1 : cout<<divisors[k-1];

    return 0;
}