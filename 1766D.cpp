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
#define f first
#define s second
using namespace std;
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};
const int MAXN = 1e7;
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

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int n; cin >> n;
    vector<pair<int , int>>p;
    for(int i = 1; i <= n;i++){
    	int x , y; cin >> x >> y;
    	p.push_back({x , y});
    }
    //for(int i = 1 ; i <= MAXN;i++) cout<<spf[i]<<endl;
    for(int i = 0; i < n;i++){
    	int x = p[i].f ,  y = p[i].s;
    	if(gcd(x , y) != 1){
    		cout<<0<<endl;
    		continue;
    	}
    	int dif = y - x;
    	if(dif == 1){
    		cout<<-1<<endl;
    	}else{
    		set<int>p_fact = get_factorization(dif);
    		int ans = INT_MAX;
    		for(auto p : p_fact){
    			ans = min(ans , p - (x % p));
    		}
    		cout<<ans<<endl;
    	}
    }
    return 0;
}