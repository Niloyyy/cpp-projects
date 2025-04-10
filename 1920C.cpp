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

vector<int> divisors(int n){
	vector<int> div;
	for(int i = 1 ; i * i <= n;i++){
		if(n % i == 0){
			div.push_back(i);
			if(n / i != i) div.push_back(n / i);
		}
	}
	return div;
}


bool check(int k , vector<int>&v){
	vector<int> tm = v;
	int g = abs(v[0]-v[k]);
	for(int i = 1 ; i < tm.size() - k;i++){
		g = __gcd(g , abs(v[i]-v[i+k]));
	}	
	return (g > 1 or g == 0);	
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>v(n);
    	for(auto &u : v) cin >> u;
    	int mx = *max_element(v.begin() , v.end()) , cnt = 1;
    	mx = msb(mx) + 1;
    	vector<int> div = divisors(n);
    	sort(div.begin() , div.end());
    	for(int j = 0 ; j < div.size()-1;j++){
    		cnt += check(div[j] , v);
    	}	
    	cout<<cnt<<endl;
    }
    return 0;
}