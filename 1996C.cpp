#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define F first
#define S second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , q; cin >> n >> q; 
    	string s , t; cin >> s >> t;
    	int a[n+1][26] = {0} , b[n+1][26] = {0};
    	for(int i = 1 ;i <= n;i++){
    		a[i][s[i-1]-'a']++;
    		b[i][t[i-1]-'a']++;
    		for(int j = 0 ; j < 26;j++){
    			a[i][j] += a[i-1][j];
    			b[i][j] += b[i-1][j];
    		}
    	}
    	while(q--){
    		int l , r; cin >> l >> r;
    		int ans = 0;
    		for(int i = 0 ; i < 26; i++){
    			ans += abs( (a[r][i] - a[l-1][i]) - (b[r][i] - b[l-1][i]));
    		}
    		cout << ans / 2 <<endl;
    	}
    
    }
    return 0;
}