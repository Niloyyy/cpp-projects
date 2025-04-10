#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-7
const int mod = 848;
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

int binpow(int a , int n  , int mod){
	if(n==1) return a;
	if(n % 2 == 0){
		int x = binpow(a , n/2 , mod);
		return 1LL * x * x % mod; 
	}else{
		int x = binpow(a , n/2 , mod);
		return (1LL * x * x) % mod * a % mod;	
	}
}

void sieve(long long n){
	bool p[n+1];
	memset(p , true , sizeof(p));
	for(ll i = 2; i*i <= n;i++){
		if(p[i]){
			for(ll j = i*i ; j <= n; j+=i){
				p[j] = false;
			}
		}
	}

}

void permutation (string &s , int l , int r){
	if(l == r) cout<<s<<endl;
	else{
		for(int i = l ; i <= r; i++){
			swap(s[l] , s[i]);
			permutation(s , l + 1 , r);
			swap(s[l] , s[i]);
		}
	}
}


int ub(vector<int>&v , int n , long long target){
	int l = 0 , h = n-1 , ans = -1;
	while(h >= l){
		int m = l + (h - l) / 2;
		if(v[m] > target){
			ans = m;
			h = m - 1;
		}else{
			l = m + 1;
		}
	}
	return ans;
}

int lb(vector<int>&v , int n ,  long long target){
	int l = 0 , h = n-1 , ans = -1;
	while(h >= l){
		int m = l + (h - l) / 2;
		if(v[m] >= target){ //smallest index for a[i] >= target;
			ans = m;
			h = m - 1;
		}else{
			l = m + 1;
		}
	}
	return ans;
}

ll p(int n ,int i){
	ll prd = 1;
	if(i == 1){
		return 1;
	}
	for(int s = 1; s <= i;s++) prd *= n;

	return prd;	
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "RRDD";
    permutation(s , 0 , 3);
    return 0;
}