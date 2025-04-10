#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

int fun(double m , vector<int>&v){
	int a = 0;
	for(int i = 0 ; i < v.size();i++){
		a += (int)(1.0*v[i] / m);
	}
	return a;
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int n , k; cin >> n >> k;
    long double sum = 0 , ans;
    vector<int>v(n);
    for(auto &i : v){
    	cin >> i;
    	sum += i;
    }
    sum /= k;
    //cout<<sum;
    long double l = 0 , r = sum , m;
    //cout<<fun(231 , v);
    while(r - l >= eps){
    	m = (r + l) / 2.0;
    	if(fun(m , v ) < k){
    		r = m;
    		ans = m;
    	}
    	else l = m;
    }
    cout<<ans;
    return 0;
}