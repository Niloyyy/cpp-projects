#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

void fun(int n , map<int,vector<int>>&m){
  vector<int>vv;
	for(int i = 1 ; i * i <= n;i++){
		if(n % i == 0){
			vv.push_back(i);
			if(n / i != i) vv.push_back(n/i);
		}
	}
	m[n] = vv;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>v;
    	map<int,int>freq;
    	map<int,vector<int>>m;
    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x;
    		if(x <= n) freq[x]++;
    		fun(i+1 , m);
    	}
    	int best = 0;
    	for(auto i : m){
    		int ans = 0;
    		for(auto d : i.second){
    			ans += freq[d];
    		}
    		best = max(ans , best);
    	}
    	cout<<best<<endl;
    }
    return 0;
}
