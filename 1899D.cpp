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


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	map<double , int>mp;
    	for(int i = 0 ; i < n;i++){
    		double x; cin >> x;
    		mp[x-log2(x)]++;
    	}
    	long long ans = 0;
    	for(auto it : mp){
    		ans += 1LL * it.second * (it.second - 1) / 2;
    	}
    	cout<<ans<<endl;
    
    }
    return 0;
}